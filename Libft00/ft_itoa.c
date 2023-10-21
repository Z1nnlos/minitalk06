/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:36:17 by noel              #+#    #+#             */
/*   Updated: 2023/10/21 17:40:51 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

char	*itoa_part1(int n)
{
	char	*result;

	result = (char *)malloc(12);
	if (!result)
		return (NULL);
	if (n == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	return (result);
}

char	*itoa_part2(int n, char *result)
{
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
	return (result);
}

char	*itoa_part3_helper(int n, char *result)
{
	int 	i;
	int		m ;
	char	temp[12];

	i = 0;
	m = 0;
	if (n == INT_MIN)
		return (result);
	if (n < 0)
	{
		result[m++] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		temp[i++] = n % 10 + '0';
		n /= 10;
	}
	i--;
	while (i >= 0)
		result[m++] = temp[i--];
	result[m] = '\0';
	return (result);
}

char	*itoa_part3(int n, char *result)
{
	if (n == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	return (itoa_part3_helper(n, result));
}

char	*ft_itoa(int n)
{
	char	*result;

	result = itoa_part1(n);
	if (!result)
		return (NULL);
	result = itoa_part2(n, result);
	result = itoa_part3(n, result);
	return (result);
}
