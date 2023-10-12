/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:15:30 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/12 12:59:03 by nsabia           ###   ########.fr       */
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
    int found;
    int set_counter_start = 0;
    int s1_size = ft_strlen(s1);
    int set_counter_end = s1_size;
    int sizeofal = s1_size - set_counter_start - set_counter_end;
    //schauen wie viele oder ob ueberhaupt char von set am anfang von s1 stehen
    while (s1[i] != 0)
    {
        m = 0;
        found = 0;
        while(set[m] != 0)
        {
            if (s1[i] == set[m])
            {
                set_counter_start++;
                found = 1;
                break;
            }
            m++;
        }
        if (!found)
            break;
        i++;
    }
    //schauen wie viele oder ob ueberhaupt char con set am ende von s1 stehen
    i = s1_size - 1;
    while (i > 0)
    {
        m = 0;
        found = 0;
        while(set[m] != 0)
        {
            if (s1[i] == set[m])
            {
                set_counter_end--;
                found = 1;
                break;
            }
            m++;
        }
        if (!found)
            break;
        i--;
    } 
    // jetzt mallocen
    result = (char *)malloc(sizeofal);
    if (!result)
        return NULL;
    //trimmen
    i = 0;
    m = 0;
    while (s1[i] != 0)
    {
        if (i >= set_counter_start && i < set_counter_end)
        {
            result[m] = s1[i];
            i++;
            m++;
        }
        else 
        i++;
    }
    result[m] = '\0';
    return result;
}
