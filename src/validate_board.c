/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:07:29 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/22 21:42:37 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**validate_board(char **board)
{
	if (!board)
		return (NULL);
	if (validate_caracters(board) || validate_walls(board))
		return (NULL);
	if (validate_possible_path(board))
		return (NULL);
	return (board);
}
