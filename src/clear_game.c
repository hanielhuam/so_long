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

static void	clear_mlx(t_mlx *mlx)
{
	mlx_destroy_image(mlx->mlx, mlx->assets->tree_1);
	mlx_destroy_image(mlx->mlx, mlx->assets->tree_2);
	mlx_destroy_image(mlx->mlx, mlx->assets->tree_3);
	mlx_destroy_image(mlx->mlx, mlx->assets->door_open);
	mlx_destroy_image(mlx->mlx, mlx->assets->door_closed);
	mlx_destroy_image(mlx->mlx, mlx->caracter);
	mlx_destroy_image(mlx->mlx, mlx->background);
	mlx_destroy_image(mlx->mlx, mlx->enemy);
	mlx_destroy_image(mlx->mlx, mlx->collectable);
	mlx_destroy_window(mlx->mlx, mlx->window);
	free(mlx);
}

void	clear_game(t_game *game)
{
	clear_board(game->board);
	clear_mlx(game->mlx);
	free(game);
}
