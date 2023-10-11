/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:21:26 by noel              #+#    #+#             */
/*   Updated: 2023/10/11 17:33:51 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
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
