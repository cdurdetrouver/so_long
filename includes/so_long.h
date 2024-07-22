/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:45:12 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 23:18:13 by gbazart          ###   ########.fr       */
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
	void			*ptr;
	void			*win;
	int				win_x;
	int				win_y;
}					t_mlx;

typedef struct s_map
{
	char			**map;
	struct s_map	*next;
}					t_map;

// function
void				init(void);
int					loop(void);

// hook
int					key_hook(int keycode, void *nothing);

// check
void				check_argv(char **argv);

// end
void				free_end(int status);
int					close_window(void *param);

#include "map.h"
#include "singleton.h"