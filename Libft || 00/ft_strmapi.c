/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:32:21 by noel              #+#    #+#             */
/*   Updated: 2023/10/10 12:40:05 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    int s_size = ft_strlen(s);
    char *result;

    //genug allocieren fuer result    
    result = (char *)malloc(s_size + 1);
    if (!result)
        return NULL;
    
    //Kopiervorgang
    while (i < s_size)
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return result; 
}


// #include <stdio.h>
// char test(unsigned int n, char c)
// {
//     if (n == 0)
//         return ('H');
//     return (c);
// }

// int main()
// {
//     const char *s = "hi";
//     char *result = ft_strmapi(s, test);
//     printf("%s\n", result);

//     // Speicher für result freigeben, wenn er nicht mehr benötigt wird
//     free(result);

//     return 0;
// }


//warmaschine