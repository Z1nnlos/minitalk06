/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:36:17 by noel              #+#    #+#             */
/*   Updated: 2023/10/08 19:21:11 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

char *ft_itoa(int n)
{
    int temp = 0;
    int i = 0;
    int Vorzeichen = 1;
    char *result;
    
    result = (char *)malloc(sizeof(n));
    if (!result)
        return NULL;

    while (n > INT_MIN && n < INT_MAX)
    {
        temp = n / 10;
        result[i] = temp + '0';
        i++; 
    }
    result = '\0';
    return result;
}

#include <stdio.h>

int main() {
    int num = -12345;
    char *str = ft_itoa(num);
    if (str) {
        printf("Der Integer %d als String: %s\n", num, str);
        free(str); // Speicher freigeben, wenn er nicht mehr benötigt wird } else {
        printf("Fehler bei der Speicherallokation.\n");
    }

    return 0;
}