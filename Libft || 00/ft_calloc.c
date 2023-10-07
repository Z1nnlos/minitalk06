/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:39:38 by noel              #+#    #+#             */
/*   Updated: 2023/10/07 16:26:08 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


void *ft_calloc (size_t nmemb, size_t size)
{
    if (nmemb == 0 || size == 0)
        return (malloc(0));
    if ((nmemb * size) > __INT_MAX__)
    {
        return 0;
    }
    return (malloc(nmemb * size));
}

int main()
{
    size_t nmemb = 1234567890;
    size_t size = 12345;
    ft_calloc(nmemb, size);
}

ananas