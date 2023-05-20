/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:00:40 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/17 14:59:49 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//check the extension of the file
// int	init_images(t_game *game)
// {
// 	int	x;
// 	int	y;

// 	x = 32;
// 	y = 32;
// 	game->row.player = mlx_xpm_file_to_image(game->mlx, "./assets/player.xpm", &x, &y);
// 	return (0);
// }

// int	my_key_hook(int keycode, t_game *game)
// {
// 	(void)game;
// //	printf("la tecla pulsada es: %d\n", keycode);
// 	if (keycode == UP)
// 	{
// 		game->player.y -=1;
// 	}
// 	else if (keycode == DOWN)
// 	{
// 		game->player.y +=1;
// 	}
// 	else if (keycode == RIGHT)
// 	{
// 		game->player.x +=1;
// 	}
// 	else if (keycode == LEFT)
// 	{
// 		game->player.x -=1;
// 	}
// 	else if (keycode == ESC)
// 	{
// 		exit_game(game);
// 	}
// 	mlx_clear_window(game->mlx, game->window);
// 	put_img(game);

// 	return (0);
// }

// void	init_player(t_game *game)
// {
// 	game->player.x = 0;
// 	game->player.y = 0;
// }

// int	main(int argc, char **argv)
// {
// 	t_game	game;

// 	if (argc < 2)
// 		error_message("you don't have a map");
// 	(void)argv;

// 	check_map(&game);

// 	//iniciamos otros datos
// 	init_player(&game);
// 	game.mlx = mlx_init();
// 	game.window = mlx_new_window(game.mlx, 640, 640, "Prueba!");
// 	init_img(&game);
// 	mlx_put_image_to_window(game.mlx, game.window, game.zplayer, 0, 0);

// 	mlx_hook(game.window, 17, 0, exit_game, &game);
// 	mlx_key_hook(game.window, my_key_hook, &game);
// 	mlx_loop(game.mlx);
// 	return (0);
// }

// void	put_img(t_game *game)//draw_map
// {
// 	mlx_put_image_to_window(game->mlx, game->window, game->map.player,
// 	 game->player.x * 32, game->player.y * 32);
// }
