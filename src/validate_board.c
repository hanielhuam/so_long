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
	//Validar se existe os caracteres e a quantidade de caracteres
	//	fazer uma função de validação para ver se há caracteres fora do escopo
	//	fazer uma função de validação para cada caracter do escopo.
	//validate_caracters(board);
	//Validar se é um retangulo rodeado por '1'
	//	uma função para validar o tamanho das linhas se são iguais
	//	uma função para validar se as bordas do jogo são '1'
	//validate_walls(bourd);
	// flood_fill
	//validate_possible_path(board);
	return (board);
}
