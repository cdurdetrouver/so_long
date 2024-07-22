/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:50:43 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 18:16:28 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	conversions(const char c, va_list list, int fd)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(list, int), fd));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(list, char *), fd));
	else if (c == 'p')
		return (ft_putptr_fd(va_arg(list, void *), fd));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(list, int), fd));
	else if (c == 'u')
		return (ft_putu_fd(va_arg(list, unsigned int), fd));
	else if (c == 'x' || c == 'X')
		return (ft_puthex_fd(va_arg(list, unsigned int), c, fd));
	else if (c == '%')
		return (ft_putchar_fd('%', fd));
	else
		return (0);
}

/**
 * @brief Outputs the string s to the standard output.
 *
 * @param string (const char *) The string to output.
 * @return (int) The number of characters outputted.
 */
int	ft_fprintf(int fd, const char *string, ...)
{
	va_list	list;
	int		length;
	int		i;

	if (!string || fd < 0)
		return (-1);
	i = 0;
	length = 0;
	va_start(list, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			length += conversions(string[i + 1], list, fd);
			i++;
		}
		else
			length += ft_putchar_fd(string[i], fd);
		i++;
	}
	va_end(list);
	return (length);
}
