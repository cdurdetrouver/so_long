/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:17:17 by gbazart           #+#    #+#             */
/*   Updated: 2024/08/03 18:01:38 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "so_long.h"

t_map	*new_map(char **src);
t_map	*get_last_map(void);
void	add_back_map(t_map *new);
void	free_map(void);
void	print_map(void);
