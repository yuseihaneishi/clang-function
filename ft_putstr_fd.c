/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaneish <yhaneish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:38:12 by yhaneish          #+#    #+#             */
/*   Updated: 2024/11/30 20:38:36 by yhaneish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	written;

	if (!s)
		return ;
	len = ft_strlen(s);
	written = 0;
	while (written < len)
	{
		if (len - written > INT_MAX)
			write(fd, s + written, INT_MAX);
		else
			write(fd, s + written, len - written);
		written += INT_MAX;
	}
}
