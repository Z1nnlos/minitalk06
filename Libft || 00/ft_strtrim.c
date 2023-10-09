/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:15:30 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/09 15:32:34 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *result;
    int i = 0;
    int m;
    int result_index = 0;
    int s1size = ft_strlen(s1);
    int setsize = ft_strlen(set);
    int set_occurrence = 0;
    int start_count = 0;
    int end_count = 0;
    int sizeofal;

    //Festlegen wie viel vorne und hinten getrimmt werden soll
    while (s1[i] != 0)
    {
        m = 0;
        while (set[m] != 0)
        {
            if (s1[i + 1] != set[m])
                break;
            else 
                start_count++;
            m++;
        }
        if (s1[i + 1] != set[m])
            break;
        i++; 
    }
    
    while (i >= 0)
    {
        m = 0;
        while (set[m] != 0)
        {
            if (s1[i] != set[m])
                break;
            else 
                end_count++;
            m++;
        }
        if (s1[i] != set[m])
            break;
        i--; 
    }

    //Feststellen wie viele bytes weggetrimmt werden fuer malloc
    i = 0;
    m = 0;
    while (s1[i] != 0)
    {
        m = 0;
        while (set[m] != 0)
        {
            if (s1[i] == set[m])
                set_occurrence++;
            m++;
        }
        i++;
    }
    
    //result allocieren
    sizeofal = s1size - set_occurrence + 1;
    result = (char *)malloc(sizeofal);
    if (!result)
        return NULL;
    
    //Kopieren in neuen String result;
    i = 0;
    m = 0;
    while(s1[i] != 0)
    {
        m = 0;
        while (set[m] != 0)
        {
            if (s1[i] != set[m] && i > start_count && i < end_count)
            {
                result[result_index] = s1[i];
                result_index++;
                break;
            }
            m++;
        }
        i++;
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