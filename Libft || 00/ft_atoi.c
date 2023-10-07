/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:58:10 by noel              #+#    #+#             */
/*   Updated: 2023/10/07 15:35:12 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *nptr)
{
    long result = 0;
    int i = 0;
    int Vorzeichen = 1;
    
    while ( nptr[i] == 32 || nptr[i] == 10 || nptr[i] == 9)
        i++;
    if(nptr[i] == '+')
        i++;
    else if (nptr[i] == '-')
    {
        Vorzeichen *= -1;
        i++;
    } 
    while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != 0)
    {
        result += nptr[i] - '0';
        result *= 10;
        i++;
    }
    result /= 10;
    return (int)result * Vorzeichen;
}

#include <stdlib.h>
int main() {
    const char *str1 = "12345";
    const char *str2 = "   -6789";
    const char *str3 = "  +42abc";
    const char *str4 = "  2147483648";
    const char *str5 = "  214748364812";

    int num1 = ft_atoi(str1);
    int num2 = ft_atoi(str2);
    int num3 = ft_atoi(str3);
    int num4 = ft_atoi(str4);

    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2); 
    printf("num3: %d\n", num3); 
    printf("num4: %d\n", num4);
    printf("%d\n", atoi(str5));

    return 0;
}
