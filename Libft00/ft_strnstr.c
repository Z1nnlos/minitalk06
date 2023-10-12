/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:36:12 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/08 16:32:55 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = ft_strlen(needle);
    int i = 0;

    if (needle_len == 0)
        return (char *)haystack;
    
    while (haystack[i] != 0 && len >= needle_len)
    {
        if (haystack[i] == needle[0] && ft_strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;
        i++;
        len--;
    }
    return NULL;
}
int main()
{
    const char *haystack = "Dies ist ein Beispieltext";
    const char *needle = "Beispiel";
    
    // Verwende strlen, um die tatsächliche Länge von haystack zu ermitteln
    size_t len = 26;

    char *result = strnstr(haystack, needle, len);

    if (result != NULL)
    {
        printf("Teilstring gefunden: %s\n", result);
    }
    else
    {
        printf("Teilstring nicht gefunden.\n");
    }

    return 0;
}
