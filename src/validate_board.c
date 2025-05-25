/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:07:29 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/24 22:03:01 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**validate_board(char **board)
{
	if (!board)
		return (NULL);
	if (validate_caracters(board) || validate_walls(board))
	{
		clear_board(board);
		return (NULL);
	}
	if (validate_possible_path(board))
	{
		clear_board(board);
		return (NULL);
	}
	return (board);
}
