/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:20:13 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 23:01:40 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_mlx	*mlx(void)
{
	static t_mlx	mlx;

	return (&mlx);
}

t_map	**map(void)
{
	static t_map	*map;

	return (&map);
}
