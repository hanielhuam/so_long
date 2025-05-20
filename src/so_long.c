/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:08:41 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/19 19:04:46 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	//t_game	*game;
	char	**game;

	if (argc != 2)
		return (0);
	game = treat_args(argv[1]);
	//game = make_game(validate_board(treat_args(argv[1])));
	if (!game)
		return (0);
	//play_game(game);
	return (0);
}
