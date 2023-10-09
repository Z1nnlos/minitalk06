/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:50:10 by noel              #+#    #+#             */
/*   Updated: 2023/10/09 14:14:37 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//trimmt nach einem ganzen string vorne und hinten weg
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *result;
    int i = 0;
    int s1size = ft_strlen(s1);
    int setsize = ft_strlen(set);
    int setcounter = 0;
    int sizeofal = 0;
    int result_index = 0; 
    

    while (s1[i] != 0)
    {
        if ((s1[0] == set[0] || s1[s1size - setsize] == set[0])&& ft_strncmp(&s1[i], set, setsize) == 0)
            setcounter += 1;
        i++;
    }
    printf("%d\n", setcounter);
    
    //Genuegend Speicherplatz reservieren
    sizeofal = s1size - setsize * setcounter + 1;
    result = (char *)malloc(sizeofal); 
    if(!result)
        return NULL;

    //Jetzt wird getrimmt
    i = 0; 
    while (s1[i] != '\0')
    {
        if ((i == 0 || i == s1size - setsize) && ft_strncmp(&s1[i], set, setsize) == 0)
        {
            i += setsize; 
            setcounter--; 
        }
        else
        {
            result[result_index] = s1[i];
            i++;
            result_index++;
        }
    }
    result[result_index] = '\0'; 
    return result;
}

int main() {
    const char *input = " abc Hallo, Welt! abc ";
    const char *set = " ";
    
    char *trimmed = ft_strtrim(input, set);
    
    if (trimmed) {
        printf("Eingabe: \"%s\"\n", input);
        printf("Ausgabe: \"%s\"\n", trimmed);
        free(trimmed); // Speicher freigeben, wenn nicht mehr benötigt
    } else {
        printf("Speicherplatz konnte nicht zugewiesen werden.\n");
    }
    
    return 0;
}
