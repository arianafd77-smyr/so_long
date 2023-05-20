/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:51:15 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/20 14:34:30 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

static	void	count_collectables(t_game *game)
{
	int	i;

	game->map.total_collect = 0;
	i = 0;
	while (game->map.row[i])
	{
		if (game->map.row[i] == 'C')
			game->map.total_collect++;
		i++;
	}
}

void	check_extension(char *map, char *ext)
{
	int	i;
	int	j;

	i = ft_strlen(map) - ft_strlen(ext);
	j = 0;
	while (map[i + j] && ext[j])
	{
		if (map[i + j] == ext[j])
			j++;
		else
		{
			error_message("wrong type of map");
			exit(1);
		}
	}
}

static void	copy_map(t_game *game)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	k = 0;
	game->map.value = ft_calloc(game->map.height + 1, sizeof(char *));
	if (!game->map.value)
		return ;
	while (i < game->map.height)
	{
		len = ft_strlen(game->map.value[i]) + 1;
		game->map.value[i] = ft_calloc(len, sizeof(char));
		if (!game->map.value[i])
			return ;
		j = 0;
		while (j < game->map.width)
		{
			game->map.value[i][j++] = game->map.row[k++];
		}
		i++;
	}
}

void	read_map(t_game *game, char *file)
{
	int		fd;
	char	*line;

	check_extension(file, ".ber");
	fd = open(file, O_RDONLY);
	if (fd <= 0)
		error_message("Failed to open file");
	line = get_next_line(fd);
	if (!line)
		error_message("Empty map");
	game->map.height = 0;
	game->map.width = ft_strlen(line) - 1;
	game->map.row = (ft_strdup_nl(line));
	free(line);
	while (line)
	{
		line = get_next_line(fd);
		game->map.row = ft_strjoin_nl(game->map.row, line);
		check_rectangle(game);
		game->map.height++;
	}
	close(fd);
	copy_map(game);
	count_collectables(game);
	check_map(game);
}
