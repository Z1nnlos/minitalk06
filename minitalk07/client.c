/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:44:54 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/05 17:05:19 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <sys/signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/_types/_sigset_t.h>

int	ft_atoi(const char *nptr)
{
	long	result;
	int		i;
	int		vorzeichen;

	result = 0;
	i = 0;
	vorzeichen = 1;
	while (nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == 32)
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

void	message(char *message, int pid)
{
	int	i;

	if (!pid || !message)
		return ;
	while (*message != '\0')
	{
		i = 7;
		while (i + 1)
		{
			if (*message & (1 << i))
			{
				kill (pid, SIGUSR1);
				usleep(200);
			}
			else
			{
				kill (pid, SIGUSR2);
				usleep(200);
			}
			i--;
		}
		message++;
	}
}

int	main(int argc, char *argv[])
{
	int	pid;

	if (argc != 3)
	{
		write (1, "Wrong arguments. Try ./client <pid> <message>\n", 47);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid < 0)
	{
		write (1, "Wrong pid. Try ./client <pid> <message>\n", 41);
		return (1);
	}
	message(argv[2], pid);
	return (0);
}
