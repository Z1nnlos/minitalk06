/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:36:17 by noel              #+#    #+#             */
/*   Updated: 2023/10/08 18:53:44 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

char *ft_itoa(int n)
{
    int temp = 0;
    int i = 0;
    
    while (n > 0)
    {
        temp *= 10;
        n /= 10;

    }
}

#include <stdio.h>

int main() {
    int num = -12345;
    char *str = ft_itoa(num);
    if (str) {
        printf("Der Integer %d als String: %s\n", num, str);
        free(str); // Speicher freigeben, wenn er nicht mehr benötigt wird
    } else {
        printf("Fehler bei der Speicherallokation.\n");
    }

    return 0;
}