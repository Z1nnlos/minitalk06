/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:04:41 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/10 18:18:05 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memcpy(void *restrict dst, const void *restrict scr, size_t n)
{
    char *a = dst;
    const char *b = scr;
    size_t i = 0;

    while(i < n)
    {
        a[i] = b[i];
        i++;
    }
    return dst;
}