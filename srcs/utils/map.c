/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:02:57 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/22 23:25:00 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_map	*new_map(char **src)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	map->map = src;
	map->next = NULL;
	return (map);
}

t_map	*get_last_map(void)
{
	t_map	*cpy;
	t_map	**head;

	head = map();
	cpy = *head;
	if (!cpy)
		return (NULL);
	while (cpy->next)
		cpy = cpy->next;
	return (cpy);
}

void	add_back_map(t_map *new)
{
	t_map	*last;
	t_map	**head;

	head = map();
	if (!*head)
	{
		*head = new;
		return ;
	}
	last = get_last_map();
	if (last)
		last->next = new;
}

void	free_map(void)
{
	t_map	**head;
	t_map	*tmp;
	t_map	*next_node;

	head = map();
	tmp = *head;
	while (tmp != NULL)
	{
		next_node = tmp->next;
		free(tmp);
		tmp = next_node;
	}
	*head = NULL;
}

void	print_map(void)
{
	t_map *cpy;
	t_map **head;
	int i;
	int j;

	head = map();
	cpy = *head;
	if (!cpy)
		return ;
	j = 0;
	while (cpy)
	{
		ft_printf("map nb : %d\n", j);
		i = 0;
		while (cpy->map[i])
		{
			ft_printf("%s\n", cpy->map[i]);
			i++;
		}
		cpy = cpy->next;
		j++;
	}
}