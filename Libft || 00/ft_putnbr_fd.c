/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ /*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */ /*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */ /*                                                +#+#+#+#+#+   +#+           */ /*   Created: 2023/10/10 18:59:15 by nsabia            #+#    #+#             */ /*   Updated: 2023/10/10 20:37:16 by noel             ###   ########.fr       */ /*                                                                            */ /* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void ft_putnbr_fd(int n, int fd)
{
    int i = 0;
    int temp[12];
    //edgecasehandling
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    //negative n handeln
    if (n < 0)
    {
        write(fd, "-", 1);
        n *= -1;
    }
    //Zahlen zweimal kopiert, damit sie in der richtigen Reihenfolge sind
    while (n > 0)
    {
        temp[i] = n % 10 + '0';
        n /= 10;
        i++;
    }
    while (i > 0)
    {
        i--;
        write(fd, &temp[i], 1);
    }
}


