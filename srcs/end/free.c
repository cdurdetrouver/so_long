/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:19:49 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/27 21:10:24 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free(void *param)
{
	if (param)
		free(param);
	param = NULL;
}

void	free_split(void **param)
{
	int	i;

	if (param == NULL)
		return ;
	i = 0;
	while (param[i] != NULL)
	{
		ft_free(param[i]);
		i++;
	}
	ft_free(param);
	param = NULL;
}

static void	free_mlx(void)
{
	if (mlx()->ptr != NULL)
	{
		mlx_destroy_window(mlx()->ptr, mlx()->win);
		mlx_destroy_display(mlx()->ptr);
		ft_free(mlx()->ptr);
	}
}

void	free_end(int status)
{
	free_mlx();
	free_map();
	exit(status);
}
