/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:31:53 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/18 13:24:44 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"
//encontrar imagenes xpm

void	draw_img(t_game *game, void *img_ptr, int j, int i)
{
	mlx_put_image_to_window(game->mlx, game->window, img_ptr, j, i);
}

void	*init_img(t_game *game, char *str)
{
	char	*path;
	void	*img;

	path = ft_strjoin(IMG_PATH, str);
	img = mlx_xpm_file_to_image(game->mlx, path,
			&game->img_width, &game->img_height);
	if (!img)
		error_message("Can't open img files");
	free(path);
	return (img);
}

void	show_images(t_game *game)
{
	game->map.space = init_img(game, "space.xpm");
	game->map.player = init_img(game, "player.xpm");
	game->map.wall = init_img(game, "wall.xpm");
	game->map.collect = init_img(game, "collect.xpm");
	game->map.door = init_img(game, "door.xpm");
}

void	print_images(t_game *game, int i, int j, int m)
{
	draw_img(game, game->map.space, j * 80, i * 80);
	if (game->map.row[m] == '1')
		draw_img(game, game->map.wall, j * 80, i * 80);
	else if (game->map.row[m] == 'P')
		draw_img(game, game->map.player, j * 80, i * 80);
	else if (game->map.row[m] == 'C')
		draw_img(game, game->map.collect, j * 80, i * 80);
	else if (game->map.row[m] == 'E')
		draw_img(game, game->map.door, j * 80, i * 80);
	else
		draw_img(game, game->map.space, j * 80, i * 80);
}

void	print_map(t_game *game, char c)
{
	int	i;
	int	j;
	int	e;
	(void) c;

	i = 0;
	e = 0;
	while (i < game->map.height)
	{
		j = 0;
		while (j < game->map.width)
		{
			print_images(game, i, j, e);
			e++;
			j++;
		}
		i++;
	}
}
