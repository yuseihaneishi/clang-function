/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:28:56 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:29:26 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char c;
// 	int a;
// 	c = '3';
// 	a = ft_isalpha(c);
// 	if (a != 0)
// 		printf("cは英字\n");
// 	else
// 		printf("cは英字ではない\n");
// 	return (0);
// }