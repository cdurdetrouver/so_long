/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:15:27 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 22:40:34 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init(void)
{
	mlx()->ptr = mlx_init();
	mlx_get_screen_size(mlx()->ptr, &mlx()->win_x, &mlx()->win_y);
	mlx()->win = mlx_new_window(mlx()->ptr, mlx()->win_x, mlx()->win_y, TITLE);
}
