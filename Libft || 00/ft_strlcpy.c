/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:22:56 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/06 16:35:33 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t strlcpy(char *restrict dst, const char *restrict src ,size_t dstsize)
{
    size_t i = 0;
    while (src[i] != '\0' && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return i; 
}

int main()
{
    char dst[10];
    const char *src = "Hello";
    size_t a = 3;
    printf("%lu", strlcpy(dst, src, a));
}