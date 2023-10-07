/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:11:07 by noel              #+#    #+#             */
/*   Updated: 2023/10/07 19:00:10 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    int i = 0;
    int size;

    if (start >= len || s[i] == 0)
        return (0);
    size = len - start + 1;
    sub = (char *)malloc(size);
    if (!sub)
        return 0;
    while (s[i] != 0 && i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return sub;
}


int main()
{
    const char *str = "abcd";
    char *sub = ft_substr(str, 1, 2); // Speicherplatz in 'sub' speichern
    printf("%s\n", sub);
    free(sub);
    return 0;
}