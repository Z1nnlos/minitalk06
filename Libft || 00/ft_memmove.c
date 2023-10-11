/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:08:34 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/11 19:07:45 by nsabia           ###   ########.fr       */
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
