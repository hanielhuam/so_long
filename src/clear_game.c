/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:23:44 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/24 20:53:52 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	clear_board(char **board)
{
	char	**init;

	init = board;
	while (*board)
		free(*board++);
	free(init);
}

void	clear_game(t_game *game)
{
	clear_board(game->board);
	free(game);
}
