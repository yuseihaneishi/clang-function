#include "libft.h"


char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!(str = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}

// #include <stdio.h>

// static char toupper_func(unsigned int index, char c) 
// {
// 	(void)index;
// 	return (c >= 'a' && c <= 'z') ? c - 32 : c;
// }

// int main(void)
// {
//     char    *result;
//     result = ft_strmapi("hello", toupper_func);
//     printf("Result: %s\n", result);
//     free(result);
//     return 0;
// }