/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:03:06 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/06 12:15:29 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        if (s1[i] == s2[i])
            i++;
        else if (s1[i] <= s2[i])
            return -1;
        else 
            return 1;
    }
    return 0;
}

int main()
{
    const char *a = "Hallo a";
    const char *b = "Hallo b";
    size_t c = 7;
    printf("%d", strncmp(a,b, c));
}