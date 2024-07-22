/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:47:48 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 18:06:25 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_hexlen(unsigned int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

/**
 * @brief Outputs the unsigned int ’num’ in hexadecimal to the standard output.
 *
 * @param num (unsigned int) The number to output.
 * @param c (const char) The case of the hexadecimal letters to use.
 * @return (int) The number of characters output.
 * @note If c is 'x', the letters are lowercase, if c is 'X', the letters are
 * uppercase.
 */
int	ft_puthex_fd(unsigned int num, const char c, int fd)
{
	if (num == 0)
		return (ft_putchar_fd('0', fd));
	if (num >= 16)
	{
		ft_puthex_fd(num / 16, c, fd);
		ft_puthex_fd(num % 16, c, fd);
	}
	else if (num <= 9)
		ft_putchar_fd(num + '0', fd);
	else
	{
		if (c == 'x')
			ft_putchar_fd(num - 10 + 'a', fd);
		else if (c == 'X')
			ft_putchar_fd(num - 10 + 'A', fd);
	}
	return (ft_hexlen(num));
}
