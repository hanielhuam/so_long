/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_tile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 21:54:10 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/08 21:12:51 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_tile(t_mlx *mlx, void *img, int i, int j)
{
	mlx_put_image_to_window(\
			mlx->mlx, mlx->window, img, j * ASSET_WIDTH, i * ASSET_HEIGHT);
}

void	draw_word(t_mlx *mlx, int moves)
{
	char	*str;

	str = ft_itoa(moves);
	mlx_string_put(mlx->mlx, mlx->window, 25, 20, 0x000000, "MOVES: ");
	mlx_string_put(mlx->mlx, mlx->window, 70, 20, 0x000000, str);
	free(str);
}
