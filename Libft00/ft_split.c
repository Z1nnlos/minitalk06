/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:35:21 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/22 18:57:44 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	wordcounting(const char *s, char c)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (*s != 0)
	{
		if (*s != c)
			i++;
		else if (*s == c)
			o++;
		s++;
	}
	return (o);
}

int	malloc_check(char **result, int i)
{
	if (!result[i])
	{
		while (i--)
		{
			free (result[i]);
		}
		free (result);
		return (1);
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		word_counter;
	char	**result;
	int		word_length;
	int		i;

	word_counter = wordcounting(s, c);
	result = (char **)ft_calloc(word_counter + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	word_length = 0;
	while (i < word_counter)
	{
		if (*s != 0 && *s == c)
			s++;
		while (s[word_length] && s[word_length] != c)
			word_length++;
		result[i] = ft_substr(s, 0, word_length);
		i++;
		if (malloc_check(result, i) == 1)
			return (NULL);
		s += word_length;
	}
	return (result);
}
//static nicht vergessen