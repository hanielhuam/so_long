/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:43:54 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/26 21:06:30 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx.h"

static	void	init_render(t_game *gam)
{
	game->mlx = mlx_init();
	game->window = mlx_new_window(game->mlx,\
			WINDOW_WIDTH, WIDOW_HEIGHT, "so_long");
	env.addr = mlx_get_data_addr(env.img, &env.bits_per_pixel, &env.line_length, &env.endian);
	mlx_hook(env.win, 4, 0, mouse_handler, &env);
	mlx_hook(env.win, 2, 1L << 0, key_handler, &env);
	mlx_hook(env.win, 17, 1L << 0, close_window, &env);
	mlx_loop_hook(game->mlx, animation_handler, game);
}

t_game	*make_game(char	**board)
{
	t_game	*game;

	if (!board)
		return (NULL);
	game = ft_calloc(1, sizeof(t_game));
	if (!game)
	{
		ft_putstr_fd("Allocation Error\n", 2);
		clear_board(board);
		return (NULL);
	}
	game->board = board;
	game->collectables = how_many('C', board);
	game->movements = 0;
	whereis('P', &game->px, &game->py, game->board);
	game->over_end = 0;
	game->is_finish = 0;
	game->touch_devil = 0;
	init_render(game);
	return (game);
}
