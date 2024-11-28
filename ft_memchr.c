#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s + i) == (unsigned char)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int main() 
{
    const char data[] = "Hello, world!";
    char target = 'o';
    int size = sizeof(data);

    char* result = (char*)ft_memchr(data, target, size);

    if (result) 
    {
        printf("'%c': %d\n", target, (int)(result - data));
    } else {
        printf("'%c' not found\n", target);
    }

    return 0;
}
