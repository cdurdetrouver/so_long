/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:52:20 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/27 21:15:16 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	character_of_the_map(char c)
{
	int			i;
	const char	chars[3] = "12P";

	i = 0;
	while (i < 3)
	{
		if (c == chars[i])
			return (true);
		i++;
	}
	return (false);
}

bool	flood_fill(char **map)
{
	int	tab[128];
	int	i;
	int	j;

	ft_memset(tab, 0, 129);
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (character_of_the_map(map[i][j]))
				tab[(short int)map[i][j]]++;
			j++;
		}
		i++;
	}
	return (true);
}

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
		check = (check && flood_fill(cpy->map));
		cpy = cpy->next;
	}
	return (check);
}
