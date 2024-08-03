/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:52:20 by gbazart           #+#    #+#             */
/*   Updated: 2024/08/03 18:06:48 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	correct_char(char c)
{
	return (c == '1' || c == '0' || c == 'C' || c == 'E' || c == 'P');
}

bool	correct_length(char **map)
{
	size_t	len;
	int		i;

	len = ft_strlen(map[0]);
	i = 0;
	while (map[i])
	{
		if (ft_strlen(map[i]) != len)
			return (false);
		i++;
	}
	return (true);
}

bool	correct_map(char **map)
{
	int	rows;
	int	cols;

	if (!correct_length(map))
		return (false);
	rows = ft_strlen(map[0]);
	cols = ft_strlen((char *)map);
	(void)rows;
	(void)cols;
	return (true);
}
// find_and_fill(map, rows, cols);

bool	check_map(void)
{
	t_map	*cpy;
	bool	check;

	cpy = *(map());
	if (!cpy)
		return (false);
	check = true;
	while (cpy)
	{
		check = (check && correct_map(cpy->map));
		cpy = cpy->next;
	}
	return (check);
}
