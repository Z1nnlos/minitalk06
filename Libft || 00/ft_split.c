/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:01:06 by noel              #+#    #+#             */
/*   Updated: 2023/10/09 11:27:44 by nsabia           ###   ########.fr       */
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

    while (s[i] != 0)
    {
       if(s[i] == c)
            ccount++;
        i++; 
    }
    sizeofal = ssize - ccount + 1;

    result = (char **)malloc(sizeofal);
    if (!result)
        return NULL;

    i = 0;
    while (s[i] != 0)
    {
        if (s[i] != c)
        {
            result[stri][chari] = s[i];
            i++;
            chari++;
        }
        if (s[i] == c)
        {
            i++;
            result[stri][chari] = '\0';
            stri++;
            chari = 0;
        }
    }
    return  result;
}

int main()
{
    const char *s = "hello there how  are you.";
    char c = ' ';
    char **result = ft_split(s, c);

    if (!result) {
        printf("Fehler bei der Aufteilung des Strings.\n");
        return 1;
    }

    // Ausgabe der aufgeteilten Zeichenketten
    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        i++;
    }

    // Speicher freigeben
    for (int j = 0; result[j] != NULL; j++) {
        free(result[j]);
    }
    free(result);

    return 0;
}