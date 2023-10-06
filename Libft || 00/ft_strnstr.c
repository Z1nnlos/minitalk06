/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:36:12 by nsabia            #+#    #+#             */
/*   Updated: 2023/10/06 17:59:06 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    int i = 0;
    int temp;

    while (haystack[i] != '\0' && i < len)
    {
        if (haystack[i] != needle[i])
            i++;
        else
        {
            temp = i;
            while (haystack[i] != '\0' && haystack[i] == needle[i] && i < len)
            {
                i++;
                if (needle[i] == '\0')
                    return (char *)&haystack[temp];
            }
        }
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
ananas
