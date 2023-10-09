/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:35:21 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/09 18:27:58 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    char **result;
    int i = 0;
    int stri = 0;
    int chari = 0;
    int ssize = ft_strlen(s);
    int ccount = 0;
    int sizeofal;

    //Zaehlt c um es fuer malloc zu subtrahieren
    while (s[i] != '\0')
    {
        if (s[i] == c)
            ccount++;
        i++;
    }
    
    //mallo, welches fur alles insgesamt reserviert
    sizeofal = ssize - ccount + 1;
    result = (char **)malloc(sizeofal * sizeof(char *));
    if (!result)
        return NULL;

    //malloc was nochmal spezifisch fuer jeden string allociert
    i = 0;
    while (i < sizeofal)
    {
        result[i] = (char *)malloc((ssize + 1) * sizeof(char));
        if (!result[i])
            return NULL;
        result[i][0] = '\0'; 
        i++;
    }

    //hier wird alles was kein char c ist kopiert in result
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            result[stri][chari] = s[i];
            i++;
            chari++;
        }
        if (s[i] == c || s[i] == '\0')
        {
            result[stri][chari] = '\0';
            stri++;
            chari = 0;
            while (s[i] == c)
                i++;
        }
    }
    result[stri] = NULL;
    return result;
}



#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *input = "Hello there I hope u folks had a nice day";
    char **result = ft_split(input, ' ');

    if (result)
    {
        int i = 0;
        while (result[i])
        {
            printf("Token %d: %s\n", i, result[i]);
            free(result[i]); // Speicherplatz für die einzelnen Zeichenfolgen freigeben
            i++;
        }
        free(result); // Speicherplatz für das Ergebnisarray freigeben
    }
    else
    {
        printf("Speicherreservierung fehlgeschlagen.\n");
    }

    return 0;
}
