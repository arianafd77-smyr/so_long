/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:33:25 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/18 15:11:28 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// void	ft_leaks()
// {
// 	system("leaks so_long");
// }

int	hook_loop(t_game *game)
{
	print_steps(game);
	return (0);
}

static void	init_game(t_game *game, char *file)
{
	game->map.steps = 0;
	game->map.n_collect = 0;
	read_map(game, file);
	game->mlx = mlx_init();
	if (!(game->mlx))
		error_message("Failed to load MLX");
	game->window = mlx_new_window(game->mlx, game->map.width * 110,
			game->map.height * 110, "Save Morty!");
	if (!(game->window))
		error_message("Failed to load window");
	show_images(game);
	print_map(game, 's');
	//draw_img(game, game->map.foot_prints, 10, 10);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2)
	{
		init_game(&game, argv[1]);
		mlx_hook(game.window, 17, 0, exit_game, &game);
		mlx_key_hook(game.window, my_key_hook, &game);
		mlx_loop_hook(game.mlx, &hook_loop, &game);
		mlx_loop(game.mlx);
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	t_game	game;

// 	if (argc < 2)
// 		error_message("you don't have a map");
// 	game.map.steps = 0;
// 	game.map.n_collect = 0;
// 	read_map(&game, argv[1]);
// 	game.mlx = mlx_init();
// 	if (!(game.mlx))
// 		error_message("Failed to load MLX");
// 	game.window = mlx_new_window(game.mlx, game.map.width * 100,
// 			game.map.height * 100, "Let's start");
// 	if (!(game.window))
// 		error_message("Failed to load window");
// 	show_images(&game);
// 	print_map(&game, 's');
// 	//draw_img(&game, game->map.foot_prints, 15, 15);
// 	mlx_hook(game.window, 17, 0, exit_game, &game);
// 	mlx_loop_hook(game.mlx, &hook_loop, &game);
// 	mlx_key_hook(game.window, my_key_hook, &game);
// 	mlx_loop(game.mlx);
// 	return (0);
// }
// int	main(int argc, char **argv)
// {
// 	t_game	game;

// 	if (argc == 2)
// 	{
// 	game.map.steps = 0;
// 	game.map.n_collect = 0;
// 		read_map(&game, argv[1]);
// 	game.mlx = mlx_init();
// 		if (!(game.mlx))
// 			error_message("Failed to load MLX");
// 	game.window = mlx_new_window(game.mlx, game.map.width * 100,
// 				game.map.height * 100, "Let's start");
// 		if (!(game.window))
// 			error_message("Failed to load window");
// 		show_images(&game);
// 		print_map(&game, 's');
// 	//draw_img(&game, game->map.foot_prints, 15, 15);
// 		mlx_hook(game.window, 17, 0, exit_game, &game);
// 		mlx_loop_hook(game.mlx, &hook_loop, &game);
// 		mlx_key_hook(game.window, my_key_hook, &game);
// 		mlx_loop(game.mlx);
// 	}
// 	return (0);
// }


