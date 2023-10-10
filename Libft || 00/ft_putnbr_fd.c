/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ /*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */ /*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */ /*                                                +#+#+#+#+#+   +#+           */ /*   Created: 2023/10/10 18:59:15 by nsabia            #+#    #+#             */ /*   Updated: 2023/10/10 20:37:16 by noel             ###   ########.fr       */ /*                                                                            */ /* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void ft_putnbr_fd(int n, int fd)
{
    char c;
    int temp = 0;
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    if (n < 0)
    {
        write(fd, "-", 1);
        n *= -1;
    }
    while (n > 0)
    {
        temp = n % 10;
        n /= 10;
        c = '0' + temp; // Konvertiere die Ziffer in ein Zeichen
        write(fd, &c, 1); // Schreibe das Zeichen in den Dateideskriptor
    }
}

int main()
{
    int num = 123;
    ft_putnbr_fd(num, STDOUT_FILENO); // Gib die Zahl auf dem Standardausgabedateideskriptor aus
    return 0;
}
