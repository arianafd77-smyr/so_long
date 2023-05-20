/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:49:21 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/18 13:48:50 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	exit_game(t_game *game)
{
	//(void)game; existed before
	mlx_clear_window(game->mlx, game->window);
	mlx_destroy_window(game->mlx, game->window);//new added
	exit(0);
}

void	error_message(char *str)
{
	ft_putstr_fd("ERROR:\n", 1);
	(void) str;
	exit (0);
}

void	win(t_game	*game)
{
	ft_putstr_fd("You won the game", 1);
	mlx_destroy_window(game->mlx, game->window);
	exit(EXIT_SUCCESS);
}

int	ft_arrlen(char **arr)
{
	int	len;

	len = 0;
	while (arr[len])
		len++;
	return (len);
}
