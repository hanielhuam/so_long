/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:30:04 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/08 20:53:11 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_handler(int keycode, t_game *game)
{
	if (keycode == 65307)
	{
		close_window(keycode, game);
		return (0);
	}
	else if (keycode == 97 || keycode == 65361)
		move_p(game, 0, -1);
	else if (keycode == 115 || keycode == 65364)
		move_p(game, 1, 0);
	else if (keycode == 119 || keycode == 65362)
		move_p(game, -1, 0);
	else if (keycode == 100 || keycode == 65363)
		move_p(game, 0, 1);
	is_end(game);
	render(game);
	return (0);
}

int	close_window(int keycode, t_game *game)
{
	(void)keycode;
	clear_game(game);
	return (0);
}

int	annimation_handler(t_game *game)
{
	if (game->annimation_count % 3 == 0)
		game->mlx->tree = game->mlx->assets->tree_1;
	if (game->annimation_count % 3 == 1)
		game->mlx->tree = game->mlx->assets->tree_2;
	if (game->annimation_count % 3 == 2)
		game->mlx->tree = game->mlx->assets->tree_3;
	game->annimation_count++;
	render(game);
	return (0);
}
