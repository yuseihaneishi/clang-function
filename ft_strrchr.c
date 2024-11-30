/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:45:13 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 21:07:26 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	char		ch;

	last = NULL;
	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			last = s;
		s++;
	}
	if (ch == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
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
