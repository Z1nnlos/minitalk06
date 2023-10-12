/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:30:04 by noel              #+#    #+#             */
/*   Updated: 2023/10/12 12:07:52 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*strdup(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(s));
	if (!dup)
		return (0);
	while (s[i] != 0)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
