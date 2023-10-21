/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:15:30 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/21 19:10:02 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	start_c_counter(const char *s1, char const *set, int found, int set_c_st)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (s1[i] != 0)
	{
		m = 0;
		found = 0;
		while (set[m] != 0)
		{
			if (s1[i] == set[m])
			{
				set_c_st++;
				found = 1;
				break ;
			}
			m++;
		}
		if (!found)
			break ;
		i++;
	}
	return (set_c_st);
}

int	end_c_counter(const char *s1, char const *set, int s1_size)
{
	int	i;
	int	m;
	int	found;

	m = 0;
	i = s1_size - 1;
	while (i > 0)
	{
		m = 0;
		found = 0;
		while (set[m] != 0)
		{
			if (s1[i] == set[m])
			{
				s1_size--;
				found = 1;
				break ;
			}
			m++;
		}
		if (!found)
			break ;
		i--;
	}
	return (s1_size);
}

void	finished_str(const char *s1, char *result, int set_c_st, int s1_size)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (s1[i] != '\0')
	{
		if (i >= set_c_st && i < s1_size)
		{
			result[m] = s1[i];
			i++;
			m++;
		}
		else
			i++;
	}
	result[m] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		set_c_st;
	int		s1_size;
	int		sizeofal;
	char	*result;

	set_c_st = 0;
	s1_size = ft_strlen(s1);
	sizeofal = s1_size - set_c_st + 1;
	if (!s1 || !set)
		return (NULL);
	set_c_st = start_c_counter(s1, set, 0, set_c_st);
	s1_size = end_c_counter(s1, set, s1_size);
	result = (char *)malloc(sizeofal);
	if (!result)
		return (NULL);
	finished_str(s1, result, set_c_st, s1_size);
	return (result);
}
