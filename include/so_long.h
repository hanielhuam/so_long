/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:04:49 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/17 20:01:57 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line.h"
# include "ft_printf.h"
# include <fcntl.h>

typedef	struct	s_game
{
	char	**board;
	int		collectables;
	int		moviments;
	int		px;
	int		py;
}				t_game;

char	**treat_args(char	*file);
int		validate_file(char *file);
char	**read_file(int fd);
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
