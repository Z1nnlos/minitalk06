/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:34:25 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/10 10:03:15 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_atoi(const char *str);
void bzero(void *s, size_t n);
void *calloc (size_t count, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memcpy(void * dst, const void * scr, size_t n);
void *memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *s, int c, size_t len);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *s, int c);
char *strdup(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t strlcpy(char * dst, const char * src ,size_t dstsize);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);

#endif