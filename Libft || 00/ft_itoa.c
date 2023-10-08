/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:36:17 by noel              #+#    #+#             */
/*   Updated: 2023/10/08 20:33:39 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

char *ft_itoa(int n)
{
    char *result;
    int Vorzeichen = 1;
    int temp = n;
    int i = 0;

    if (n == 0)
        return 0;
    
    if (n < 0)
    {
        Vorzeichen *= -1;
        n = -n;
    }

    while (temp > 0)
    {
        temp /= 10;
        i++;    
    }
   
    result = (char *)malloc(i + 2);
    if (!result)
        return NULL;
    
    if (Vorzeichen == -1)
    {
        result[0] = '-';
    }
    
    result[i + 1] = '\0';
    temp = n;
    while (n > 0)
    {
        temp = n % 10;
        result[i] = temp + '0';
        i--;
        n /= 10;
    }
    return result;    
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positiveNum1 = 123;
    int positiveNum2 = 4567;
    int negativeNum1 = -89;
    int negativeNum2 = -12345;

    char *str1 = ft_itoa(positiveNum1);
    char *str2 = ft_itoa(positiveNum2);
    char *str3 = ft_itoa(negativeNum1);
    char *str4 = ft_itoa(negativeNum2);

    if (str1 && str2 && str3 && str4)
    {
        printf("Positive Zahl 1: %s\n", str1);
        printf("Positive Zahl 2: %s\n", str2);
        printf("Negative Zahl 1: %s\n", str3);
        printf("Negative Zahl 2: %s\n", str4);

        free(str1);
        free(str2);
        free(str3);
        free(str4);
    }
    else
    {
        printf("Fehler bei der Speicherallokation.\n");
    }

    return 0;
}

