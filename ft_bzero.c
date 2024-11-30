/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:28:00 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:28:02 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, int n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr++ = 0;
		n--;
	}
}

// #include <stdio.h>

// int main() {
//     char buffer[10] = "Hello";
//     printf("Before: '%s'\n", buffer);
//     ft_bzero(buffer, 5);
//     printf("After: '%s'\n", buffer);
//     return (0);
// }