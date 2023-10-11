/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:36:17 by noel              #+#    #+#             */
/*   Updated: 2023/10/11 18:36:49 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char	*ft_itoa(int n)
{
	char	*result;
	int		result_index;
	int		i;
	char	temp[12];

	i = 0;
	result_index = 0;
	edgecase(n);
	result = (char *)malloc(12);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[i] = '-';
		result_index++;
		n *= -1;
	}
	if (n == 0)
	{
		temp[i] = '0';
		i++;
	}
	else
	{
		while (n > 0)
		{
			temp[i] = '0' + (n % 10);
			n /= 10;
			i++;
		}
	}
	i--;
	while (i >= 0)
	{
		result[result_index] = temp[i];
		result_index++;
		i--;
	}
	result[result_index] = '\0';
	return (result);
}

char	*edgecase(int n)
{
	char	*result;

	if (n == INT_MIN)
	{
		result[0] = '-';
		result[1] = '2';
		result[2] = '1';
		result[3] = '4';
		result[4] = '7';
		result[5] = '4';
		result[6] = '8';
		result[7] = '3';
		result[8] = '6';
		result[9] = '4';
		result[10] = '8';
		result[11] = '\0';
		return (result);
	}
}

