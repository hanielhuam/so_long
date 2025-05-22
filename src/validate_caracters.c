/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_caracters.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 20:54:24 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/21 21:18:22 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//Validar se existe os caracteres e a quantidade de caracteres
//	fazer uma função de validação para ver se há caracteres fora do escopo
//	fazer uma função de validação para cada caracter do escopo.

static int	validate_scope(char **board)
{
	int	i;
	int	j;

	i = 0;
	while (board[i])
	{
		j = 0;
		while (board[i][j])
		{
			if (!ft_strchr(SCOPE, board[i][j++]))
			{
				ft_putstr_fd("usage of forbidden caracter", 2);
				return (1);
			}
		}
		i++;
	}
	return (0);
}

static int	validate_caracters_count(char **board)
{
	if (how_many('1', board) < 1)
	{
		ft_putstr_fd("there is no wall\n", 2);
		return (1);
	}
	if (how_many('E', board) < 1)
	{
		ft_putstr_fd("there is no Exit\n", 2);
		return (1);
	}
	if (how_many('C', board) < 1)
	{
		ft_putstr_fd("there is no Collectable\n", 2);
		return (1);
	}
	if (how_many('P', board) < 1)
	{
		ft_putstr_fd("there is no Player\n", 2);
		return (1);
	}
	return (0);
}

int	validate_caracters(char **board)
{
	if (validate_scope(board) || validate_caracters_count(board))
		return (1);
	return (0);
}
