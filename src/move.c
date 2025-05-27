/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:53:49 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/26 21:30:04 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	move_player(game, i, j)
{
	if (game->over_end)
		game->board[game->px][game->py] = 'E';
	else
		game->board[game->px][game->py] = '0';
	game->board[i][j] = 'P';
	game->moviments++;
}

void	move_p(t_game *game, int i, int j)
{
	char	c;

	c = game->board[game->px + i][game->py + j];
	if (c == '0')
		move_player(game, game->px + i, game->py + j);
	if (c == 'C')
	{
		move_player(game, game->px + i, game->py + j);
		game->collectables--;
	}
	if (c == 'E')
	
}
