/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ /*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */ /*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */ /*                                                +#+#+#+#+#+   +#+           */ /*   Created: 2023/10/10 18:59:15 by nsabia            #+#    #+#             */ /*   Updated: 2023/10/10 20:37:16 by noel             ###   ########.fr       */ /*                                                                            */ /* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void ft_putnbr(int n, int fd)
{
    char c;
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    if (n < 0)
    {
        write(fd, "-", 1);
        n *= -1;
    }
    while (n > 0)
    {
        c = '0' + (n % 10);
        n /= 10;
        write(fd, &c, 1);
    }
}

int main()
{
    int n = 550;
    int fd = 1;
    ft_putnbr(n, fd);
}
ananas//das ERgebnis muss noch umgedreht werden und dann passt das