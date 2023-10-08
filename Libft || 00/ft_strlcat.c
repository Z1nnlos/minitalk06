/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:59:38 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/08 13:25:58 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t j = 0;

    while (dst[i] != '\0')
        i++;
    while(src[j] != '\0' && j < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    if (i < dstsize)
        dst[i] = '\0';
    return i;
}

// int main()
// {
//     char dst[20] = "hello ";  // Verwende ein Zeichenarray mit ausreichend Platz
//     const char *src = "theres";
//     size_t m = 20;  // Stelle sicher, dass dstsize ausreichend groß ist
//     printf("%lu", strlcat(dst, src, m));
//     return 0;
// }