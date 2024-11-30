/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:41:55 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:41:56 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

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