/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_tile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 21:54:10 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/06 22:03:36 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_tile(t_mlx *mlx, void *img, int i, int j)
{
	mlx_put_image_to_window(\
			mlx->mlx, mlx->window, img, i * ASSET_WIDTH, j * ASSET_HEIGHT);
}

void	draw_word(t_mlx *mlx,)
