#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	int	s_size;
	char *result;

	i = 0;
	s_size = ft_strlen(s);
	result = (char*)malloc(s_size + 1);
	if(!result)
		return NULL;
	while (i < s_size)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return result;
}