#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		src_len;
	int		i;
	char	*dest;

	src_len = ft_strlen(src);
	i = 0;
	dest = (char *)malloc((src_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src_len > i)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strdup("string"));
// 	printf("%s\n", strdup("string"));
// 	return (0);
// 