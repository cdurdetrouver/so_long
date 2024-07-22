/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:17:17 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 23:23:57 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "so_long.h"

t_map	*new_map(char **src);
t_map	*get_last_map(void);
void	add_back_map(t_map *new);
void	free_map(void);
void	print_map(void);