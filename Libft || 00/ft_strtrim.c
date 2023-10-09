/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:50:10 by noel              #+#    #+#             */
/*   Updated: 2023/10/09 11:31:17 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *result;
    int i = 0;
    int s1size = ft_strlen(s1) -1;
    int setsize = ft_strlen(set) - 1;
    int setcounter = 0;
    int sizeofal = 0;
    
    //Herausfinden, ob set vorkommt und wenn ja vorne und hinten?
    //Irgendwie herausfinden, ob es vorne oder hinten ist oder beides!
    while (s1[i] != 0)
    {
        if (s1[i] == set[0] && ft_strncmp(s1, set, setsize) == 0 )
            setcounter += 1;
        i++;
    }
    printf("%d", setcounter);
    
    //Genuegend Speicherplatz reservieren
    sizeofal = s1size - setsize * setcounter + 1;
    result = (char *)malloc(sizeofal); 
    if(!result)
        return NULL;

    //Jetzt wird getrimmt
    while (s1[i] != 0)
    {
        if (setcounter == 0)
        {
            result[i] = s1[i];
            i++;
        }
        if (setcounter == 1)
        {
            result[i] = s1[i + setsize];
            i++;
        }
        if(setcounter == 2)
        {
            result [i] = s1[i + setsize];
            i++;
            if (s1[i + setsize] == s1[s1size - setsize])
                break;
        }
    }
    result[i] = '\0';
    return result;
}

int main()
{
    const char *s1 = "abc Hello there abc";
    const char *set = "abc";
    printf("%s", ft_strtrim(s1, set));
}