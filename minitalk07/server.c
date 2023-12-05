/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:44:57 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/05 16:50:01 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/signal.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "./libs/ft_printf01/ft_printf.h"

void	handle_income(int signal)
{
	static int	counter = 0;
	static char	last_byte = 0;

	if (signal == SIGUSR1)
		last_byte = (last_byte << 1) | 1;
	if (signal == SIGUSR2)
		last_byte = (last_byte << 1) | 0;
	counter++;
	if (counter == 8)
	{
		write (1, &last_byte, 1);
		counter = 0;
		last_byte = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	if (pid < 0)
		return (0);
	ft_printf("PID: %d\n", pid);
	signal(SIGUSR1, handle_income);
	signal (SIGUSR2, handle_income);
	while (1)
		usleep(10);
}
