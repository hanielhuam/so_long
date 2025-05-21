/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:07:29 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/19 18:13:16 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**validate_board(char **board)
{
	if (!board)
		return (NULL);
	validate_caracters(board);
	//validate_walls(bourd);
	// flood_fill
	//validate_possible_path(board);
	return (board);
}
