/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:29:44 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:29:45 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char c = '\0';
//     int a;

//     a = ft_isdigit(c);
//     if (a != 0)
//         printf("数値⚪︎\n");
//     else
//         printf("数値×\n");
//     return (0);
// }