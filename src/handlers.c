/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:30:04 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/04 21:19:15 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_handler(int keycode, t_game *game)
{
	
}

int	close_window(int keycode, t_game *game)
{
	(void)game;
}

int	annimation_handler(t_game *game)
{
	(void)game;
}
/*
mlx_hook(env.win, 2, 1L << 0, key_handler, &env);
mlx_hook(env.win, 17, 1L << 0, close_window, &env);
mlx_loop_hook(game->mlx, animation_handler, game);
*/
