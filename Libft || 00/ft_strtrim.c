/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:50:10 by noel              #+#    #+#             */
/*   Updated: 2023/10/09 09:12:49 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *result;
    int i1 = 0;
    int s1size = ft_strlen(s1) -1;
    int setsize = ft_strlen(set) - 1;
    int setcounter = 0;
    
    //Herausfinden, ob set vorkommt und wenn ja vorne und hinten?
    while (s1[i1] != 0)
    {
        if (s1[i1] == set[0] && ft_strncmp(s1, set, setsize) == 0)
        {
            setcounter++;
        }
        i1++;
    }
    printf("%d", setcounter);
    
}

int main()
{
    const char *s1 = "abc Hello there abc";
    const char *set = "abc";
    ft_strtrim(s1, set);
}