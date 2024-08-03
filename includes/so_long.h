/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:45:12 by gbazart           #+#    #+#             */
/*   Updated: 2024/08/03 18:00:52 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// lib
#include "struct.h"
#include "char.h"
#include "libft.h"
#include "mlx.h"
#include "map.h"
#include "singleton.h"

// stdlib
#include <stdbool.h>
#include <unistd.h>

// struct
typedef struct s_mlx
{
	void			*ptr;
	void			*win;
	int				win_x;
	int				win_y;
}					t_mlx;

// function
void				init(void);
int					loop(void);

// hook
int					key_hook(int keycode, void *nothing);

// check
void				check_argv(char **argv);
bool				check_map(void);

// end
void				free_end(int status);
void				ft_free(void *param);
void				free_split(void **param);
int					close_window(void *param);
