#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc == 0)
// 	{
// 		printf("%s", argv[0]);
// 		return (1);
// 	}
// 	printf("%d", ft_strlen(argv[1]));
// 	return (0);
// }