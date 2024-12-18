/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:31:23 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:31:25 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	if (n == 0 || dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char source[] = "42tokyo";
//     char destination[20];
//     int len = strlen(source);

//     ft_memcpy(destination, source, len);

//     printf("len:%d\n", len);
//     printf("%s\n", destination);
//     return (0);
// }
