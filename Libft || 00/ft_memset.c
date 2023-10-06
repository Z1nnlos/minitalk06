/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:48:38 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/06 13:44:40 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memset(void *s, int c, size_t len)
{
    unsigned char *a = s;
    unsigned char *b = (unsigned char) c;

    size_t i = 0;
    while (i < len)
    {
        *a = b;
        i++;
        a++;
    }
    return s;
}

// int main()
// {
//     char *s = "hey";
//     int c = 'A';
//     size_t len = 4;
//     memset(s, c, len);
// }