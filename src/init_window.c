/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:13:13 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/09 18:28:36 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*init_window(t_mlx *mlx, char **board)
{
	int	width;
	int	height;

	width = 0;
	while (board[0][width])
		width++;
	height = 0;
	while (board[height])
		height++;
	return (mlx_new_window(mlx->mlx, \
				width * ASSET_WIDTH, height * ASSET_HEIGHT, "so_long"));
}
