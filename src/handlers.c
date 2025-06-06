/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:30:04 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/05 22:01:16 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_handler(int keycode, t_game *game)
{
	if (keycode == 55)
	{
		close_window(keycode, game);
		return (0);
	}
	else if (keycode == 0 || keycode == 123)
		move_p(game, 0, -1);
	else if (keycode == 1 || keycode == 125)
		move_p(game, 1, 0);
	else if (keycode == 13 || keycode == 126)
		move_p(game, -1, 0);
	else if (keycode == 2 || keycode == 124)
		move_p(game, 0, 1);
	is_end(game);
	render_game(game);
}

int	close_window(int keycode, t_game *game)
{
	clear_game(game);
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
}
/*
mlx_hook(env.win, 2, 1L << 0, key_handler, &env);
mlx_hook(env.win, 17, 1L << 0, close_window, &env);
mlx_loop_hook(game->mlx, animation_handler, game);
*/
