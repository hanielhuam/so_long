/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:43:54 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/06/09 19:33:32 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	void	init_assets(t_mlx *mlx)
{
	int	img_width;
	int	img_height;

	img_width = ASSET_WIDTH;
	img_height = ASSET_HEIGHT;
	mlx->caracter = mlx_xpm_file_to_image(mlx->mlx, \
			CARACTER, &img_width, &img_height);
	mlx->enemy = mlx_xpm_file_to_image(mlx->mlx, \
			ENEMY, &img_width, &img_height);
	mlx->collectable = mlx_xpm_file_to_image(mlx->mlx, \
			COLLECTABLE, &img_width, &img_height);
	mlx->assets->door_open = mlx_xpm_file_to_image(mlx->mlx, \
			DOOR_OPEN, &img_width, &img_height);
	mlx->assets->door_closed = mlx_xpm_file_to_image(mlx->mlx, \
			DOOR_CLOSE, &img_width, &img_height);
	mlx->background = mlx_xpm_file_to_image(mlx->mlx, \
			BACKGROUND, &img_width, &img_height);
	mlx->assets->tree_1 = mlx_xpm_file_to_image(mlx->mlx, \
			TREE_1, &img_width, &img_height);
	mlx->assets->tree_2 = mlx_xpm_file_to_image(mlx->mlx, \
			TREE_2, &img_width, &img_height);
	mlx->assets->tree_3 = mlx_xpm_file_to_image(mlx->mlx, \
			TREE_3, &img_width, &img_height);
}

static void	init_config_mlx(t_mlx *mlx, t_game *game)
{
	mlx->mlx = mlx_init();
	mlx->window = init_window(mlx, game->board);
	init_assets(mlx);
	mlx->door = mlx->assets->door_closed;
	mlx->tree = mlx->assets->tree_1;
}

static t_mlx	*init_render(t_game *game)
{
	t_mlx	*mlx;
	t_asset	*assets;

	mlx = ft_calloc(1, sizeof(t_mlx));
	if (!mlx)
	{
		ft_putstr_fd("Allocation Error\n", 2);
		return (NULL);
	}
	assets = ft_calloc(1, sizeof(t_asset));
	if (!assets)
	{
		ft_putstr_fd("Allocation Error\n", 2);
		free(mlx);
		return (NULL);
	}
	mlx->assets = assets;
	init_config_mlx(mlx, game);
	game->mlx = mlx;
	return (mlx);
}

static void	init_game(t_game *game, char **board)
{
	game->board = board;
	game->collectables = how_many('C', board);
	game->movements = 0;
	whereis('P', &game->px, &game->py, game->board);
	game->over_end = 0;
	game->is_finish = 0;
	game->touch_devil = 0;
	game->annimation_count = 0;
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
	init_game(game, board);
	if (!init_render(game))
	{
		clear_board(game->board);
		return (NULL);
	}
	return (game);
}
