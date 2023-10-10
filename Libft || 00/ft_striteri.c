/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:57:04 by noel              #+#    #+#             */
/*   Updated: 2023/10/10 12:34:49 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i = 0;
    
    while (s[i] != 0)
    {
        f(i, &s[i]);
        i++;
    }
}

// #include <ctype.h>

// void convertToUpper(unsigned int index, char *c)
// {
//     if (*c >= 'a' && *c <= 'g') {
//         *c = toupper(*c);
//     }
// }


// #include <stdio.h>

// int main()
// {
//     char s[] = "Hallo, Welt!";
    
//     // Aufruf von ft_striteri mit der Funktion convertToUpper
//     ft_striteri(s, convertToUpper);
    
//     // Zeigen Sie die umgewandelte Zeichenkette an
//     printf("%s\n", s);
    
//     return 0;
// }
