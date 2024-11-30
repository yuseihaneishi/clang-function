/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:41:29 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:41:31 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <ctype.h>

// char to_uppercase(unsigned int i, char c)
// {
//     if (islower(c))
//         return (char)toupper(c);
//     return (c);
// }

// int main(void)
// {
//     char *s = "hello, world!";
//     char *result = ft_strmapi(s, to_uppercase);

//     if (result)
//     {
//         printf("Original: %s\n", s);
//         printf("Modified: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed!\n");
//     }
//     return (0);
// }
