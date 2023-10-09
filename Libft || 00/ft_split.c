/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:01:06 by noel              #+#    #+#             */
/*   Updated: 2023/10/09 10:22:26 by noel             ###   ########.fr       */
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
    int sizeofal = ssize - ccount;

    while (s[i] != 0)
    {
       if(s[i] == c)
            ccount++;
        i++; 
    }

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
            stri++;
        }
    }
    
}

int main()
{
    const char **s = ;
    char c = 32;
    printf("%s", ft_split(s, c));
}