/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:50:30 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/05 12:44:05 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isalnum(int c);
char *ft_strchr(const char *s, int c);
int ft_isascii(int c);
int ft_isprint(int c);
char *ft_strrchr(const char *s, int c);
size_t ft_strlen(const char *s);

#endif 