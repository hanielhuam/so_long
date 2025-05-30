/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_walls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:02:13 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/22 21:24:17 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	validate_lenght(char **board)
{
	size_t	lenght;

	if (!board || !*board)
	{
		ft_putstr_fd("the wall lenght is not equal\n", 2);
		return (1);
	}
	lenght = ft_strlen(*board);
	while (*board)
	{
		if (lenght != ft_strlen(*board++))
		{
			ft_putstr_fd("the wall lenght is not equal\n", 2);
			return (1);
		}
	}
	return (0);
}

static int	validate_wall_line(char *line)
{
	while (*line)
	{
		if (*line++ != '1')
			return (1);
	}
	return (0);
}

static int	validate_arround_walls(char **board)
{
	size_t	size;

	if (validate_wall_line(*board))
	{
		ft_putstr_fd("not surrounded by walls\n", 2);
		return (1);
	}
	while (*board)
	{
		size = ft_strlen(*board);
		if ((*board)[0] != '1' || (*board)[size - 1] != '1')
		{
			ft_putstr_fd("not surrounded by walls\n", 2);
			return (1);
		}
		board++;
	}
	if (validate_wall_line(board[-1]))
	{
		ft_putstr_fd("not surrounded by walls\n", 2);
		return (1);
	}
	return (0);
}

int	validate_walls(char **board)
{
	if (validate_lenght(board) || validate_arround_walls(board))
		return (1);
	return (0);
}
