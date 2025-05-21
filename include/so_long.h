/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:04:49 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/20 21:22:46 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line.h"
# include "ft_printf.h"
# include <fcntl.h>
# include <stdio.h>

# define SCOPE = "01ECPD";

typedef	struct	s_game
{
	char	**board;
	int		collectables;
	int		movements;
	int		px;
	int		py;
}				t_game;

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
void	render_game(t_game *game);
void	move_p(t_game *game);
void	clear_game(t_game *game);

#endif
