/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:48:08 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 18:06:49 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_hexlenptr(unsigned long long num)
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

static int	ft_puthexptr_fd(unsigned long long num, int fd)
{
	if (num >= 16)
	{
		ft_puthexptr_fd(num / 16, fd);
		ft_puthexptr_fd(num % 16, fd);
	}
	else if (num <= 9)
		ft_putchar_fd(num + '0', fd);
	else
		ft_putchar_fd(num - 10 + 'a', fd);
	return (ft_hexlenptr(num));
}

/**
 * @brief Outputs the pointer ’ptr’ in hexadecimal to the standard output.
 *
 * @param ptr (void *) The pointer to output.
 * @return (int) The number of characters output.
 */
int	ft_putptr_fd(void *ptr, int fd)
{
	int	len;

	len = 0;
	if (ptr == NULL)
		len += ft_putstr_fd("(nil)", fd);
	else
	{
		len = ft_putstr_fd("0x", fd);
		len += ft_puthexptr_fd((unsigned long long)ptr, fd);
	}
	return (len);
}
