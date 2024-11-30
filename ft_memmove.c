/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:31:41 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:31:42 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*my_memmove(void *dest, const void *src, int n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (d > s && d < s + n)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[] = "Hello, World!";
//     memmove(str + 7, str, 6);
//     printf("memmove: %s\n", str);

//     my_memmove(str + 7, str, 6);
//     printf("ft_memmove: %s\n", str);

//     return (0);
// }