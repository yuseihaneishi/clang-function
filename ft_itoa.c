#include "libft.h"

static int  ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

static void ft_strrev(char *str)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
		i++;
	}
}

char    *ft_itoa(int n)
{
	char	*str;
	int		sign;
	size_t	length;

	sign = (n < 0);
	if (!(str = ft_calloc(11 + sign, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (sign)
		str[length] = '-';
	ft_strrev(str);
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
//     int num = -12345;
//     char *result;

//     result = ft_itoa(num);
//     if (result)
//     {
//         printf("The string representation of %d is: %s\n", num, result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }