/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:50:10 by noel              #+#    #+#             */
/*   Updated: 2023/10/08 18:34:02 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *result;
    int i1 = 0;
    int i2 = ft_strlen(s1) -1;

    while (s1[i] != 0 && ft_str)
}
int main()
{
    const char *s1 = "abc Hello there abc";
    const char *set = "abc";
    printf("%s", ft_strtrim(s1, set));
}