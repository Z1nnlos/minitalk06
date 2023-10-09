/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:36:17 by noel              #+#    #+#             */
/*   Updated: 2023/10/09 16:07:09 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
    char *result;
    int result_index = 0;
    int i = 0;
    char temp[12]; // Annahme: Ein int hat maximal 12 Stellen (inklusive Vorzeichen)

    // Speicher für result reservieren (maximale Größe)
    result = (char *)malloc(13 * sizeof(char)); // 12 Zeichen + Null-Terminator
    if (!result)
        return NULL;


    if (n < 0)
    {
        result[i] = '-';
        result_index++;
        n *= -1;
    }

    if (n == 0)
    {
        temp[i++] = '0';
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
    int positiveNum1 = 0;
    
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

