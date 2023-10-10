#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *result;
    int i = 0;
    int s_size = ft_strlen(s);
    int start_to_len = len - start + 1;

    //mallocen
    result = (char *)malloc(start_to_len);
    if (!result)
        return NULL;
    
    //kopieren
    while (s[i] != 0)
    {
        if (s[i] < start)
        {
            i++;
            continue;
        }
        else if (s[i] > start && s[i] < len)
        {
            result[i] = s[i];
            i++;
        }
    }
    result[i] = '\0';
    return result;
}

#include <stdio.h>
int main()
{
    const char *s = "Hello";
    unsigned int n = 1;
    size_t len = 4;
    char *str = ft_substr(s, n, len);
    printf("%s", str);
    free(str);
}