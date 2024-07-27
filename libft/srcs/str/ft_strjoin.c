/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:22:29 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/27 19:57:29 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief join two strings.
 *
 * @param s1 (char *) string 1
 * @param s2 (char *) string 2
 * @return (char *) don't forget to free it.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	if (!s1)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	new = malloc(total_len * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, s1_len + 1);
	ft_strlcat(new, s2, total_len);
	return (new);
}
