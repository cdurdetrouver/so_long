/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:15:27 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/27 18:49:54 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init(void)
{
	t_mlx	*mlx_cpy;

	mlx_cpy = mlx();
	mlx_cpy->ptr = mlx_init();
	mlx_get_screen_size(mlx_cpy->ptr, &mlx_cpy->win_x, &mlx_cpy->win_y);
	mlx_cpy->win = mlx_new_window(mlx_cpy->ptr, mlx_cpy->win_x, mlx_cpy->win_y,
			TITLE);
}
