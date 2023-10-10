/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:08:34 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/10 16:12:05 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *source = (char *)dst;
    char *destination = (char *)src;
    int i = 0;
    int k = len;

    if (source[0] == '\0' || destination[0] == '\0')
        return NULL;
    if (source < destination)
    {
        source += len;
        destination += len;
        while (len > 0)
        {
            destination[i] = source[i];
            k--; 
        }
    }
    else 
    {
        while (len > 0)
        {
            destination[i] = source[i];
            i++;
        }
    }
    return dst;
}


#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "abcdefgh";
    char dst[10];

    // Test 1: Kopieren Sie src nach dst, wobei dst nach src überlappt
    memmove(dst, src + 2, 6);
    printf("Test 1: %s\n", dst);  // Erwartet: "cdefghgh"

    // Test 2: Kopieren Sie src nach dst, wobei src nach dst überlappt
    memmove(src + 2, src, 6);
    printf("Test 2: %s\n", src);  // Erwartet: "abababgh"

    // Test 3: Keine Überlappung zwischen src und dst
    memmove(dst, src, 4);
    printf("Test 3: %s\n", dst);  // Erwartet: "abababab"

    // Test 4: Überlappung am Ende von src nach dst
    memmove(dst, src + 4, 4);
    printf("Test 4: %s\n", dst);  // Erwartet: "ababghab"

    return 0;
}
