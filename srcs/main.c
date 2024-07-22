/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:45:25 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 18:27:36 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	if (argc > 11)
	{
		ft_fprintf(2, "Too much map\nNeed less than 10 maps\n");
		return (EXIT_FAILURE);
	}
	check_argv(argv);
	init();
	mlx_loop(mlx()->ptr);
	free_end(EXIT_SUCCESS);
}
