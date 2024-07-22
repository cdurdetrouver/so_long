/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:48:50 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 17:08:10 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string ’s’ to the given file descriptor, followed by a
 * newline.
 *
 * @param s (char *) The string to output.
 * @param fd (int) The file descriptor on which to write.
 */
ssize_t	ft_putendl_fd(char *s, int fd)
{
	ssize_t	len;

	len = 0;
	len += ft_putstr_fd(s, fd);
	len += ft_putchar_fd('\n', fd);
	return (len);
}
