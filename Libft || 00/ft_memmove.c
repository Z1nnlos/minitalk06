/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:08:34 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/12 09:14:03 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *source;
	char *destination;
	int	i;
	int	k; 

	source = (char *)dst;
	destination = (char *)src;
	i = 0;
	k = len;
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
