/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:01:06 by noel              #+#    #+#             */
/*   Updated: 2023/10/08 16:47:17 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    char **result;
    int i = 0;
    int ccounter = 0;

    while (s[i] != 0 && s[i] == c)
    {
        ccounter++;
        i++;
    }

    int size = ft_strlen(s) - ccounter + 1;
    result = (char **)malloc(size);

}