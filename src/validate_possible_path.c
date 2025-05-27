/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_possible_path.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:43:38 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/26 20:31:18 by hmacedo-         ###   ########.fr       */
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
	if (!copy_board)
		return (NULL);
	i = 0;
	while (i < count)
	{
		copy_board[i] = ft_strdup(board[i]);
		if (!copy_board[i])
		{
			clear_board(copy_board);
			return (NULL);
		}
		i++;
	}
	return (copy_board);
}

static void	recursive_part(char **board, int i, int j)
{
	board[i][j] = 'X';
	if (board[i + 1] && ft_strchr("CEP0", board[i + 1][j]))
		recursive_part(board, i + 1, j);
	if (board[i][j + 1] && ft_strchr("CEP0", board[i][j + 1]))
		recursive_part(board, i, j + 1);
	if ((i - 1) >= 0 && ft_strchr("CEP0", board[i - 1][j]))
		recursive_part(board, i - 1, j);
	if ((j - 1) >= 0 && ft_strchr("CEP0", board[i][j - 1]))
		recursive_part(board, i, j - 1);
}

static int	flood_fill(char **board)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	whereis('P', &i, &j, board);
	recursive_part(board, i, j);
	if (how_many('P', board) || how_many('C', board) || how_many('E', board))
		return (1);
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
