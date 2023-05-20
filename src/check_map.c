/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:21:35 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/20 15:16:59 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// void	check_rectangle(t_game *game)
// {
// 	size_t	len;

// 	len = ft_strlen(game->map.row);
// 	if ((ft_strlen(game->map.row)) % game->map.width != 0)
// 		error_message("Map is not rectangular");
// }

void	check_rectangle(t_game *game)
{
	if (ft_strlen(game->map.row) % game->map.width != 0)
		error_message("Map is not rectangular");
}

static void	check_walls(char *line, t_game *game)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(line))
	{
		if ((int) i < game->map.width && line[i] != '1')
			error_message("Map is not surrounded by walls\n");
		else if ((i % game->map.width == 0 || i % game->map.width
				== game->map.width - 1) && line[i] != '1')
			error_message("Map is not surrounded by walls\n");
		else if (i > (ft_strlen(line) - game->map.width) && line[i] != '1')
			error_message("Map is not surrounded by walls\n");
		i++;
	}
}

// static void	is_surrounded_with_walls(char *map, t_game *game)
// {
// 	int i;
// 	int map_len;

// 	map_len = ft_strlen(map);
// 	i = 0;
// 	while (i < map_len)
// 	{
// 		if (i < game->map.width && map[i] != '1')
// 			error_found("Map is not surrounded by walls\n");
// 		else if ((i % game->map.width == 0 || i % game->map.width
// 				== game->map.width - 1) && map[i] != '1')
// 			error_found("Map is not surrounded by walls\n");
// 		else if (i >= map_len - game->map.width && map[i] != '1')
// 			error_found("Map is not surrounded by walls\n");
// 		i++;
// 	}
// }

static void	check_unrecognized(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] != 'E' && map[i] != 'C' && map[i] != 'P'
			&& map[i] != '0' && map[i] != '1')
		{
			error_message("You have some unrecognized elements\n");
			return ;
		}
        i++;
	}
}

static void	check_elements(char *map)
{
	int	i;
	int	door;
	int	collect;
	int	player;

	i = 0;
	door = 0;
	collect = 0;
	player = 0;
	while (map[i] != '\0')
	{
		if (map[i] == 'E')
			door++;
		else if (map[i] == 'C')
			collect = 1;
		else if (map[i] == 'P')
			player++;
		i++;
	}
	if (door != 1 || collect != 1 || player != 1)
		error_message("You have invalid number of elements in your map\n");
}

void	check_map(t_game *game)
{
	check_elements(game->map.row);
	check_unrecognized(game->map.row);
	check_walls(game->map.row, game);
	is_valid_path(game);
}
