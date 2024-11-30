/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:41:55 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 21:38:48 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	int i;
// 	int j;
// 	unsigned int n;

// 	char a[] = "hello";
// 	i = 0;
// 	if (argc < 2)
// 	{
// 		printf("%s", argv[0]);
// 		return (1);
// 	}
// 	if (argc < 3)
// 	{
// 		printf("Usage: %s <string> <number>", argv[0]);
// 		return (1);
// 	}
// 	while (i < argc)
// 	{
// 		printf("%s\n", argv[i]);
// 		i++;
// 	}

// 	n = atoi(argv[2]);
// 	j = ft_strncmp(a, argv[1], n);

// 	printf("Result : %d\n", j);
// 	printf("Result : %d\n", strncmp(a, argv[1], n));
// }