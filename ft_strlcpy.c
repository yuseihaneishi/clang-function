/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:41:06 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:41:07 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char src[] = "Hello, World!";
//     char mydest[6];
//     char dest[6];

//     unsigned int copied_size = ft_strlcpy(mydest, src, sizeof(mydest));
//     strlcpy(dest, src, sizeof(dest));

//     printf("元の文字列: \"%s\"\n", src);
//     printf("コピー後の文字列(ft_strlcpy): \"%s\"\n", mydest);
//     printf("コピー後の文字列(strlcpy): \"%s\"\n", dest);
//     printf("元の文字列の長さ: %u\n", copied_size);

//     return (0);
// }