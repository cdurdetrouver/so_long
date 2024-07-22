/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:50:26 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 17:08:50 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 *
 * @param n (int) The integer to output.
 * @param fd (int) The file descriptor on which to write.
 */
ssize_t	ft_putnbr_fd(int n, int fd)
{
	long int	num;
	ssize_t		len;

	num = n;
	len = 0;
	if (num < 0)
	{
		len += ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num >= 10)
	{
		len += ft_putnbr_fd(num / 10, fd);
		len += ft_putnbr_fd(num % 10, fd);
	}
	else
	{
		len += ft_putchar_fd(num + 48, fd);
	}
	return (len);
}
