/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:32:21 by noel              #+#    #+#             */
/*   Updated: 2023/10/10 09:56:48 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int n;
    int i = 0;
    char c;
    int s_size = ft_strlen(s);
    char *result;

    //genug allocieren fuer result    
    result = (char *)malloc(s_size + 1);
    if (!result)
        return NULL;
    
    //Kopiervorgang
    while (i < s_size)
    {
        result[i] = f(n, c);
        i++;
    }
    result[i] = '\0';
    return result; 
}

void *test(unsigned int n, char c)
{
    n = 4;
    c = 'A';
    return *test;
}

#include <stdio.h>

int main()
{
    const char *s = "hi";
    printf("%s", ft_strmapi(s, test(4, 'A'))); 
}

//warmaschine