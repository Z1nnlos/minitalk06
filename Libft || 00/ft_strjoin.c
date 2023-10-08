/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:21:26 by noel              #+#    #+#             */
/*   Updated: 2023/10/08 12:17:57 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    char *s3;
    size_t sum = ft_strlen(s1) + ft_strlen(s2) + 1;

    s3 = (char *)malloc(sum);
    if (!s3)
        return NULL;
    
    ft_memset(s3, 0 , sum);
    
    ft_strlcat(s3, s1, sizeof(s3));
    ft_strlcat(s3, s2, sizeof(s3));
    
    return (s3);
}

int main()
{
    const char *s1 = "Hello ";
    const char *s2 = "there";
    printf("%s", ft_strjoin(s1, s2));
}
