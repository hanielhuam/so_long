/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:08:41 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/26 20:48:51 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc != 2)
		return (0);
	game = make_game(validate_board(treat_args(argv[1])));
	if (!game)
		return (0);
	render(game);
	mlx_key_hook(game->mlx->window, key_handler, game);
	mlx_hook(game->mlx->window, 17, 0, close_window, game);
	mlx_loop_hook(game->mlx->mlx, annimation_handler, game);
	mlx_loop(game->mlx->mlx);
	return (0);
}
