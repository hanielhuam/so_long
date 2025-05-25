/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_possible_path.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:43:38 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/24 22:03:06 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static char	**copy_board(char **board)
{
	int		i;
	char	**copy_board;
	int		count;

	count = 0;
	while (board[count])
		count++;
	copy_board = calloc(count + 1, sizeof(char *));
	if (!copy_boar)
		return (NULL);
	i = 0
	while (i < count)
	{
		copy_board[i] = ft_strdup(board[i]);
		if (!copy_board[i])
		{
			clear_board(copy_board[0]);
			return (NULL);
		}
		i++;
	}
	return (copy_board);
}

static int	flood_fill(char **board)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	whereis('P', &i, &j, board);
	recusive_part(board, i, j);
	if (how_many('P', board) || how_many('C', board) || )
	return (0);
}

int	validate_possible_path(char **board)
{
	char	**d_board;

	d_board = copy_board(board);
	if (!d_board)
	{
		ft_putstr_fd("allocation error\n", 2);
		return (1);
	}
	if (flood_fill(d_board))
	{
		clear_board(d_board);
		ft_putstr_fd("impossible game to finish\n", 2);
		return (1);
	}
	clear_board(d_board);
	return (0);
}
