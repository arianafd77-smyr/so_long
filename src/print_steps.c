/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_steps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:31:21 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/18 13:02:57 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	print_steps(t_game *game)
{
	char	*count_steps;

	count_steps = ft_itoa(game->map.steps);
	if (!count_steps)
		return ;
	ft_putstr_fd("Steps: ", 1);
	ft_putnbr_fd(game->map.steps, 1);
	ft_putchar_fd('\n', 1);
	mlx_string_put(game->mlx, game->window, 33, 23, 0xFFFFFF, count_steps);
	free(count_steps);
	game->map.steps_flag = 0;
}

