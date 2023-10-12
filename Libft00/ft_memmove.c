/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:08:34 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/12 14:35:22 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	copy(char *source, char *destination, size_t len, int k)
{
	int	i;

	i = 0;
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
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destination;
	int		k;

	source = (char *)dst;
	destination = (char *)src;
	k = len;
	if (source[0] == '\0' || destination[0] == '\0')
		return (NULL);
	copy(source, destination, len, k);
	return (dst);
}
