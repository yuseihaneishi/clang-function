/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:30:32 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:31:00 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	data1[] = "Hello, world!";
// 	const char	data2[] = "Hello, world!";
// 	const char	data3[] = "Hello, World!";
// 	int			size;
// 	int			result1;
// 	int			result2;

// 	size = sizeof(data1);
// 	result1 = ft_memcmp(data1, data2, size);
// 	printf("data1 vs data2: %d\n", result1);
// 	result2 = ft_memcmp(data1, data3, size);
// 	printf("data1 vs data3: %d\n", result2);
// 	return (0);
// }
