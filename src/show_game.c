/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:57:29 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/25 20:47:57 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	show_board(char **board)
{
	while (*board)
		ft_printf("%s\n", *board++);
}

void	show_game(t_game *game)
{
	show_board(game->board);
}
