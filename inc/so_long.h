/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:42:46 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/18 13:40:24 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../minilibx/mlx.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define UP 13
# define DOWN 1
# define RIGHT 2
# define LEFT 0
# define ESC 53
# define IMG_PATH    "./assets/"

// typedef struct s_player
// {+
// 	int		x;
// 	int		y;
// }	t_player;

typedef struct s_map //s_map cambio del nobre a s_image
{
	char	*row;
	char	**value;
	void	*collect;
	void	*player;
	void	*wall;
	void	*door;
	void	*space;
	int		width;
	int		height;
	int		total_collect;
	int		n_collect;
	int		steps;
	int		steps_flag;
	int		foot_prints;
}	t_map;

typedef struct s_game
{
	void		*mlx;
	void		*window;
	t_map		map;
	int			img_height;
	int			img_width;
}						t_game;

void		print_steps(t_game *game);
int			ft_arrlen(char **arr);
void		check_map(t_game *game);
void		check_rectangle(t_game *game);
void		print_map(t_game *game, char c);
void		read_map(t_game	*game, char *file);
void		error_message(char *str);
void		win(t_game	*game);
int			is_valid_path(t_game *game);
int			exit_game(t_game *game);
int			my_key_hook(int keycode, t_game *game);
void		draw_img(t_game *game, void *img_ptr, int j, int i);
void		*init_img(t_game *game, char *str);
void		show_images(t_game *game);


# define WHITE 0xFFFFFF
#endif