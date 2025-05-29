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

static void	touch_devil(t_game *game)
{
	if (game->over_end)
		game->board[game->px][game->py] = 'E';
	else
		game->board[game->px][game->py] = '0';
	game->touch_devil = 1;
	game->movements++;
}

static void	update_p_location(t_game *game, int i, int j)
{
	game->px = i;
	game->py = j;
}

static void	move_player(t_game *game, int i, int j)
{
	if (game->over_end)
	{
		game->board[game->px][game->py] = 'E';
		game->over_end = 0;
	}
	else
		game->board[game->px][game->py] = '0';
	game->board[i][j] = 'P';
	game->movements++;
	update_p_location(game, i, j);
}

void	move_p(t_game *game, int i, int j)
{
	char	c;

	if (game->is_finish)
		return ;
	c = game->board[game->px + i][game->py + j];
	if (c == '0')
		move_player(game, game->px + i, game->py + j);
	if (c == 'C')
	{
		move_player(game, game->px + i, game->py + j);
		game->collectables--;
	}
	if (c == 'E')
	{
		move_player(game, game->px + i, game->py +j);
		game->over_end = 1;
	}
	if (c == 'D')
		touch_devil(game);
}
