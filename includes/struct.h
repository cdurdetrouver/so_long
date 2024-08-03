/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:00:21 by gbazart           #+#    #+#             */
/*   Updated: 2024/08/03 18:04:02 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// struct
typedef struct s_mlx
{
	void	*ptr;
	void	*win;
	int		win_x;
	int		win_y;
}			t_mlx;

typedef struct s_map
{
	char			**map;
	struct s_map	*next;
}			t_map;
