/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:58:10 by noel              #+#    #+#             */
/*   Updated: 2023/10/11 18:09:27 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	long	result;
	int		i;
	int		vorzeichen;

	result = 0;
	i = 0;
	vorzeichen = 1;
	while (nptr[i] == 32 || nptr[i] == 10 || nptr[i] == 9)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		vorzeichen *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != 0)
	{
		result += nptr[i] - '0';
		result *= 10;
		i++;
	}
	result /= 10;
	return ((int)result * vorzeichen);
}
