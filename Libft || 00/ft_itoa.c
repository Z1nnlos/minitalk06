/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:36:17 by noel              #+#    #+#             */
/*   Updated: 2023/10/09 17:07:51 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char *ft_itoa(int n)
{
    char *result;
    int result_index = 0;
    int i = 0;
    char temp[12];

    // Speicher für result allocieren
    result = (char *)malloc(sizeof(n)); 
    if (!result)
        return NULL;

    //edgecasescheisse
    if (n == INT_MIN)
    {
        char *result = (char *)malloc(12); // Genug Platz für "-2147483648" und den Null-Terminator
        if (result)
        {
            result[0] = '-';
            result[1] = '2';
            result[2] = '1';
            result[3] = '4';
            result[4] = '7';
            result[5] = '4';
            result[6] = '8';
            result[7] = '3';
            result[8] = '6';
            result[9] = '4';
            result[10] = '8';
            result[11] = '\0'; // Null-Terminator
            return result;
        }
        else
        {
            return NULL;
        }
    }
    
    if (n < 0)
    {
        result[i] = '-';
        result_index++;
        n *= -1;
    }

    if (n == 0)
    {
        temp[i] = '0';
        i++;
    }
    else
    {
        while (n > 0)
        {
            temp[i] = '0' + (n % 10);
            n /= 10;
            i++;
        }
    }
    i--; 
    
    while (i >= 0)
    {
        result[result_index] = temp[i];
        result_index++;
        i--;
    }
    result[result_index] = '\0';
    return result;
}



int main()
{
    int positiveNum1 = -2147483648;
    
    char *str1 = ft_itoa(positiveNum1);

    if (str1)
    {
        printf("Zahl: %s\n", str1);
        free(str1);
    }
    else
    {
        printf("Fehler bei der Speicherallokation.\n");
    }

    return 0;
}

