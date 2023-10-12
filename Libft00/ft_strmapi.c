/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:32:21 by noel              #+#    #+#             */
/*   Updated: 2023/10/12 10:20:20 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	int	s_size;
	char *result;

	i = 0;
	s_size = ft_strlen(s);
	result = (char*)malloc(s_size + 1);
	if(!result)
		return NULL;
	while (i < s_size)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return result;
}
