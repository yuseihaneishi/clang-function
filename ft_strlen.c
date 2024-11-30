/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:41:15 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:41:16 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
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