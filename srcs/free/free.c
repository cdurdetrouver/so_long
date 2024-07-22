/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:19:49 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 18:25:53 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	free_mlx(void)
{
	mlx_destroy_window(mlx()->ptr, mlx()->win);
	free(mlx()->win);
	free(mlx()->ptr);
}

void	free_end(int status)
{
	free_mlx();
	exit(status);
}
