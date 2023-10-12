/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:36:12 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/12 13:06:55 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	int		i;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && len >= needle_len)
	{
		if (haystack[i] == needle[0]
			&& ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		i++;
		len--;
	}
	return (NULL);
}
