/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:35:21 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/12 18:38:19 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	new_strring(const char *s, char c, char **result, int stri)
{
	int	i;
	int	chari;

	chari = 0;
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
}

int	stri_count(char const *s, char c, int i, int stri)
{
	while (s[i] != '\0')
	{
		if (s[i++] == c)
			stri++;
	}
	return (stri);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		stri;
	int		ssize;
	int		sizeofal;

	i = 0;
	stri = stri_count(s, c, i, 0);
	ssize = ft_strlen(s);
	sizeofal = ssize - stri + 1;
	result = (char **)malloc(sizeofal * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	stri = 0;
	while (i < sizeofal)
	{
		result[i++] = (char *)malloc((ssize + 1) * sizeof(char));
		if (!result[i])
			return (NULL);
		result[i++][0] = '\0';
	}
	new_strring(s, c, result, stri);
	result[stri] = NULL;
	return (result);
}
