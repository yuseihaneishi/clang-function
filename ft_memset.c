/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:31:54 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:31:55 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n;
//     char buffer[10];

//     n = sizeof(buffer);
//     ft_memset(buffer, 'a', n);
//     buffer[n - 1] = '\0';
//     printf("%s\n", buffer);
//     return (0);
// }