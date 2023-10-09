/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:03:22 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/09 15:07:20 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char *ft_strrchr(const char *s, int c)
{
    const char *startadd = s;
    
    int i = 0;
    while (s[i] != '\0')
        i++;
	while (s[i] != *startadd)
	{
		if (s[i] == c)
		{
			return (char *)(s + i);
		}
		i--;
	}
    return NULL;	
}

// int main()
// {
//     const char *a = "Hello there how are u";
//     int c = 'o';
// 	printf("%s", ft_strrchr(a, c));
// }