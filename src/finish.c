/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 20:37:08 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/29 20:37:14 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_end(t_game *game)
{
	if (game->over_end && !game->collectables)
	{
		ft_printf("Congratilations you won!!!!\n");
		game->is_finish = 1;
	}
	else if (game->touch_devil)
	{
		ft_printf("you lost your soul to devil\n");
		game->is_finish = 1;
	}
}

void	finish_game(t_game *game, char *str)
{
	ft_printf("Game finished\n");
	clear_game(game);
	free(str);
}
