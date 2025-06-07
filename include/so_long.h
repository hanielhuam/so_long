/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:04:49 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/06 22:03:48 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line.h"
# include "ft_printf.h"
# include "mlx.h"
# include <fcntl.h>
# include <stdio.h>

# define SCOPE "01ECPD"
# define WINDOW_WIDTH 1920
# define WINDOW_HEIGHT 1080
# define ASSET_WIDTH 32
# define ASSET_HEIGHT 32
# define DOOR_OPEN "assests/door_open.xpm"
# define DOOR_CLOSE "assests/closed_door.xpm"
# define BACKGROUND "assests/background.xpm"
# define CARACTER "assests/caracter.xpm"
# define COLLECTABLE "assests/collectables.xpm"
# define ENEMY "assests/enemy.xpm"
# define TREE_1 "assests/tree_1.xpm"
# define TREE_2 "assests/tree_2.xpm"
# define TREE_3 "assests/tree_3.xpm"

typedef struct s_asset
{
	void	*door_open;
	void	*door_closed;
	void	*tree_1;
	void	*tree_2;
	void	*tree_3;
}			t_asset

typedef struct s_mlx
{
	void	*mlx;
	void	*window;
	void	*caracter;
	void	*background;
	void	*enemy;
	void	*door;
	void	*collectable;
	void	*tree;
	t_asset	*assets;
}			t_mlx

typedef struct s_game
{
	t_mlx	*mlx;
	char	**board;
	int		collectables;
	int		movements;
	int		px;
	int		py;
	int		over_end;
	int		is_finish;
	int		touch_devil;
	int		animation_count;
}			t_game;

char	**treat_args(char	*file);
int		validate_file(char *file);
char	**read_file_game(int fd);
int		validate_caracters(char **board);
int		validate_walls(char **board);
int		validate_possible_path(char **board);
char	**validate_board(char **board);
t_game	*make_game(char	**board);
int		how_many(char c, char **board);
void	whereis(char c, int *x, int *y, char **board);
void	show_game(t_game *game);
void	show_board(char **board);
void	render_game(t_game *game);
void	draw_tile(t_mlx *mlx, void *img, int i, int j);
void	move_p(t_game *game, int i, int j);
void	is_end(t_game *game);
void	clear_game(t_game *game);
void	clear_board(char **board);
int		key_handler(int keycode, t_game *game);
int		close_window(int keycode, t_game *game);
int		annimation_handler(t_game *game);

#endif
