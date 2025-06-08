/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:21:26 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/06 22:03:39 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	print_tile(t_game *game, int i, int j)
{
	if (game->board[i][j] == '1')
		draw_tile(game->mlx, game->mlx->tree, i, j);
	if (game->board[i][j] == '0')
		draw_tile(game->mlx, game->mlx->background, i, j);
	if (game->board[i][j] == 'D')
		draw_tile(game->mlx, game->mlx->enemy, i, j);
	if (game->board[i][j] == 'C')
		draw_tile(game->mlx, game->mlx->collectable, i, j);
	if (game->board[i][j] == 'E')
		draw_tile(game->mlx, game->mlx->door, i, j);
	if (game->board[i][j] == 'P')
		draw_tile(game->mlx, game->mlx->caracter, i, j);
}

void	render_game(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->board[i])
	{
		j = 0;
		while (game->board[i][j])
		{
			print_tile(game, i, j);
			j++;
		}
		i++;
	}
}
