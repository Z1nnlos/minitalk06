/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:24:32 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/06 14:06:24 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *a = s1;
    const unsigned char *b = s2;
    int i = 0;
    int diff = 0;

    if (*a == 0)
        return 0;
    while(a[i] != '\0' && i < n)
    {
        if (a[i] == b[i])
            i++;
        else
            diff = a[i] - b[i];
            i++;
            diff = a[i] - b[i] - diff;
            return diff;
    }
    return 0;
}