/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:45:13 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:45:24 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	const char	*result;

	result = NULL;
	while (*str)
	{
		if (*str == c)
		{
			result = str;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return ((char *)result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*text = "Hello, world!";
// 	char		target;
// 	char		*result;

// 	target = 'o';
// 	result = ft_strrchr(text, target);
// 	if (result)
// 	{
// 		printf("'%c'  %ld\n", target, result - text);
// 	}
// 	else
// 	{
// 		printf("'%c' not found\n", target);
// 	}
// 	return (0);
// }
