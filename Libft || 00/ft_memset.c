/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:48:38 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/12 09:20:14 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t len)
{
	unsigned char *a;
	unsigned char *b;
	size_t			i;

	a = s;
	b = (unsigned char *) &c;
	i = 0;
	while (i < len)
	{
		a[i] = *b;
		i++;
	}
	return s;
}
