/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:27:54 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/20 15:02:26 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

static void	key_w(t_game *game)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen1(game->map.row))
	{
		if (game->map.row[i] == 'P')
			break ;
	}
	if (game->map.row[i - game->map.width] == 'C')
		game->map.n_collect++;
	if (game->map.row[i - game->map.width] == 'E'
		&& game->map.n_collect == game->map.total_collect)
		win(game);
	if (game->map.row[i - game->map.width] != '1'
		&& game->map.row[i - game->map.width] != 'E')
	{
		game->map.row[i] = '0';
		game->map.row[i - game->map.width] = 'P';
		game->map.steps++;
		game->map.steps_flag = 1;
		print_map(game, 'w');
	}
}

static void	key_s(t_game *game)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen1(game->map.row))
	{
		if (game->map.row[i] == 'P')
			break ;
	}
	if (game->map.row[i + game->map.width] == 'C')
		game->map.n_collect++;
	if (game->map.row[i + game->map.width] == 'E'
		&& game->map.n_collect == game->map.total_collect)
		win(game);
	if (game->map.row[i + game->map.width] != '1'
		&& game->map.row[i + game->map.width] != 'E')
	{
		game->map.row[i] = '0';
		game->map.row[i + game->map.width] = 'P';
		game->map.steps++;
		game->map.steps_flag = 1;
		print_map(game, 's');
	}
}

static void	key_a(t_game *game)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen1(game->map.row))
	{
		if (game->map.row[i] == 'P')
			break ;
	}
	if (game->map.row[i - 1] == 'C')
		game->map.n_collect++;
	if (game->map.row[i - 1] == 'E'
		&& game->map.n_collect == game->map.total_collect)
		win(game);
	if (game->map.row[i - 1] != '1' && game->map.row[i - 1] != 'E')
	{
		game->map.row[i] = '0';
		game->map.row[i - 1] = 'P';
		game->map.steps++;
		game->map.steps_flag = 1;
		print_map(game, 'a');
	}
}

static void	key_d(t_game *game)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen1(game->map.row))
	{
		if (game->map.row[i] == 'P')
			break ;
	}
	if (game->map.row[i + 1] == 'C')
		game->map.n_collect++;
	if (game->map.row[i + 1] == 'E'
		&& game->map.n_collect == game->map.total_collect)
		win(game);
	if (game->map.row[i + 1] != '1'
		&& game->map.row[i + 1] != 'E')
	{
		game->map.row[i] = '0';
		game->map.row[i + 1] = 'P';
		game->map.steps++;
		game->map.steps_flag = 1;
		print_map(game, 'd');
	}
}

int	my_key_hook(int keycode, t_game *game)
{
	(void)game;
	if (keycode == UP)
		key_w(game);
	else if (keycode == DOWN)
		key_s(game);
	else if (keycode == RIGHT)
		key_d(game);
	else if (keycode == LEFT)
		key_a(game);
	else if (keycode == ESC)
		exit_game(game);
	return (0);
}
