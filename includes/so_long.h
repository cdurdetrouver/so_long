/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:45:12 by gbazart           #+#    #+#             */
/*   Updated: 2024/08/03 18:05:06 by gbazart          ###   ########.fr       */
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
