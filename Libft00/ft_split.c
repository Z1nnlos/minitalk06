/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:35:21 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/12 14:37:00 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		stri;
	int		chari;
	int		ssize;
	int		sizeofal;

	i = 0;
	stri = 0;
	chari = 0;
	ssize = ft_strlen(s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			stri++;
		i++;
	}
	sizeofal = ssize - stri + 1;
	result = (char **)malloc(sizeofal * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	stri = 0;
	while (i < sizeofal)
	{
		result[i] = (char *)malloc((ssize + 1) * sizeof(char));
		if (!result[i])
			return (NULL);
		result[i][0] = '\0';
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			result[stri][chari] = s[i];
			i++;
			chari++;
		}
		if (s[i] == c || s[i] == '\0')
		{
			result[stri][chari] = '\0';
			stri++;
			chari = 0;
			while (s[i] == c)
				i++;
		}
	}
	result[stri] = NULL;
	return (result);
}
