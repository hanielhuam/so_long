/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_walls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:02:13 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/21 21:02:47 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//Validar se é um retangulo rodeado por '1'
//	uma função para validar o tamanho das linhas se são iguais
//	uma função para validar se as bordas do jogo são '1'

static int	validate_lenght(**board)
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

static int	validate_arround_walls(char **board)
{
	size_t	len_x;
	size_t	len_y;

}

int	validate_walls(char **board)
{
	if (validate_lenght(board), validate_arround_walls(board))
		return (1);
	return (0);	
}
