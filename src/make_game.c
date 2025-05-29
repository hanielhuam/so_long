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
	return (game);
}
