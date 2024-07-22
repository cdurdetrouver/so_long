/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:45:12 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 18:26:00 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// lib
#include "char.h"
#include "libft.h"
#include "mlx.h"

// stdlib
#include <unistd.h>

// struct
typedef struct s_mlx
{
	void	*ptr;
	void	*win;
	int		win_x;
	int		win_y;
}			t_mlx;

typedef struct s_data
{
	t_mlx	mlx;
}			t_data;

// function
void		init(void);

// check
void		check_argv(char **argv);

// free
void		free_end(int status);

#include "singleton.h"