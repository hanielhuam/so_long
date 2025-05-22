/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   how_many.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:44:00 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/21 20:56:44 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int     how_many(char c, char **board)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (board[i])
	{
		j = 0;
		while (board[i][j])
		{
			if (board[i][j++] == c)
				count++;
		}
		i++;
	}
	return (count);
}
