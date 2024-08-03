/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:45:25 by gbazart           #+#    #+#             */
/*   Updated: 2024/08/03 17:29:12 by gbazart          ###   ########.fr       */
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
	ft_printf("Welcome to so_long\n");
	check_argv(argv);
	init();
	mlx_key_hook(mlx()->win, key_hook, NULL);
	mlx_hook(mlx()->win, 17, 1L << 17, close_window, NULL);
	mlx_loop(mlx()->ptr);
	free_end(EXIT_SUCCESS);
}
