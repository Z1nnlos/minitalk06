/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:51:11 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/10 18:58:02 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int i = 0;

    while (s[i] != 0)
    {
        write (fd, &s[i], sizeof(char));
        i++;
    }
    write (fd, "\n", 1);
}

int main()
{
    char *s = "Hello";
    int fd = 1;
    ft_putendl_fd(s, fd);
}