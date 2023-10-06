/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:08:34 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/06 18:32:52 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memmove(void *dst, const void *src, size_t len)
{
    const unsigned char *a = src;
    unsigned char *b = dst;

    if (a == b || len == 0)
        return dst;
    if (a < b && a + len > b)
    {
        
    }
    ananas
}