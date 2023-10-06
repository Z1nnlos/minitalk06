/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:47:34 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/05 12:26:43 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// int ft_isalnum(char c)
// {
//     if(ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
//         return 1;
//     else 
//         return 0;
// }

int ft_isalnum(int c)
{
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122 || c >= 48 && c <= 57)
        return 1; 
    else 
        return 0;
}

#include <stdio.h>
int main()
{
    int c = 'H';
    printf("%d\n", ft_isalnum(c));
}