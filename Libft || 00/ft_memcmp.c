/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:24:32 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/11 18:49:19 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				i;
	int					diff;

	diff = 0;
	i = 0;
	a = s1;
	b = s2;
	if (*a == 0)
		return (0);
	while (a[i] != '\0' && i < n)
	{
		if (a[i] == b[i])
			i++;
		else
		{
			diff = a[i] - b[i];
			i++;
			diff = a[i] - b[i] - diff;
			return (diff);
		}
	}
	return (0);
}
