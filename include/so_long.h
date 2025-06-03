/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:04:49 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/02 21:32:03 by hmacedo-         ###   ########.fr       */
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
# define DOOR_OPEN "assests/door_open.xpm"
# define DOOR_CLOSE "assests/closed_door.xpm"
# define BACKGROUND "assests/background.xpm"
# define CARACTER "assests/caracter.xpm"
# define COLLECTABLES "assests/collectables.xpm"
# define ENEMY "assests/enemy.xpm"
# define TREE_1 "assests/tree_1.xpm"
# define TREE_2 "assests/tree_2.xpm"
# define TREE_3 "assests/tree_3.xpm"

typedef struct s_mlx
{
	void	*mlx;
	void	*window;

}

typedef struct s_game
{
	void	*mlx;
	void	*window;
	char	**board;
	int		collectables;
	int		movements;
	int		px;
	int		py;
	int		over_end;
	int		is_finish;
	int		touch_devil;
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
void	play_game(t_game *game);
void	show_game(t_game *game);
void	show_board(char **board);
void	render_game(t_game *game);
void	move_p(t_game *game, int i, int j);
void	is_end(t_game *game);
void	finish_game(t_game *game, char *str);
void	clear_game(t_game *game);
void	clear_board(char **board);

#endif
