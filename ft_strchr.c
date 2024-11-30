/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:38:58 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 21:50:50 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

// int main() {
//     const char* text = "Hello, world!";
//     char target = 'o';
//     char* result = ft_strchr(text, target);

//     if (result) {
//         printf("'%c': %ld\n", target, result - text); //アドレスの差で位置を表示
//     } else {
//         printf("'%c' not found\n", target);
//     }

//     return (0);
// }
