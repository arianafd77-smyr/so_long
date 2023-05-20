/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valueid_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:07:29 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/10 19:08:27 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	check_status(t_game *game, int i, int j)
{
	if (game->map.value[i][j] == 'P' &&
	(game->map.value[i + 1][j] == 'C' || game->map.value[i + 1][j] == '0'
	|| game->map.value[i - 1][j] == 'C' || game->map.value[i - 1][j] == '0'
	|| game->map.value[i][j + 1] == 'C' || game->map.value[i][j + 1] == '0'
	|| game->map.value[i][j - 1] == 'C' || game->map.value[i][j - 1] == '0'))
		return (1);
	return (0);
}

void	fill(t_game *game, int i, int j)
{
	if (game->map.value[i][j] == '0' || game->map.value[i][j] == 'C')
		game->map.value[i][j] = 'P';
}

int	check_collect(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map.height)
	{
		j = 0;
		while (j < game->map.width)
		{
			if (game->map.value[i][j] == 'C')
			{
				error_message("more collectibles to be reached");
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_exit(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map.height)
	{
		j = 0;
		while (j < game->map.width)
		{
			if ((game->map.value[i][j] == 'E' && game->map.value[i + 1][j] == 'P')
			|| (game->map.value[i][j] == 'E' && game->map.value[i - 1][j] == 'P')
			|| (game->map.value[i][j] == 'E' && game->map.value[i][j + 1] == 'P')
			|| (game->map.value[i][j] == 'E' && game->map.value[i][j - 1] == 'P'))
				return (1);
			j++;
		}
		i++;
	}
	error_message("couldn't reach the exit");
	exit(1);
	return (0);
}

int	is_valid_path(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map.height)
	{
		j = 0;
		while (j < game->map.width)
		{
			if (check_status(game, i, j))
			{
				fill(game, i + 1, j);
				fill(game, i - 1, j);
				fill(game, i, j + 1);
				fill(game, i, j - 1);
				i = 0;
			}
			j++;
		}
		i++;
	}
	if (check_collect(game) && check_exit(game))
		return (1);
	return (0);
}
