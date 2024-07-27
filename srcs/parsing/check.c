/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:18:35 by gbazart           #+#    #+#             */
/*   Updated: 2024/07/27 20:52:29 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**read_map(int fd)
{
	char	**map_s;
	char	*tmp;
	char	*map;
	char	*line;

	map = NULL;
	line = get_next_line(fd);
	while (line != NULL)
	{
		tmp = map;
		map = ft_strjoin(tmp, line);
		free(tmp);
		free(line);
		line = get_next_line(fd);
	}
	map_s = ft_split(map, '\n');
	free(map);
	return (map_s);
}

void	open_map(char *filename)
{
	char	**map;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		free_end(EXIT_FAILURE);
	map = read_map(fd);
	close(fd);
	if (map == NULL)
		free_end(EXIT_FAILURE);
	add_back_map(new_map(map));
}

void	check_argv(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_printf("map %d : %s\n", i, argv[i]);
		open_map(argv[i]);
		i++;
	}
	print_map();
}
