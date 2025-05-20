/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 20:43:06 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/19 18:58:17 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <readline/readline.h>

// retorna o resultado do check_move
static int	move(t_game *game, char *str)
{
	// verifica se o movimento pode ser feito, caso não devolve um código
	// caso pode mover ou é um comando não previsto 0
	// caso bateu no inimígo 1
	// caso bateu conseguiu na saída com todos os coletáveis 2
	// caso bateu na parede ou na saída, mas sem todos os coletáveis -1
	/*	if (!ft_strncmp(str, "a", 2))
			//Move o player, coleta o C e conta a quatos movimentos
			return (move_p(game, 0, -1));
		else if (!ft_strncmp(str, "s", 2))
			return (move_p(game, 1, 0));
		else if (!ft_strncmp(str, "w", 2))
			return (move_p(game, -1, 0));
		else if (!ft_strncmp(str, "d", 2))
			return (move_p(game, 0, 1));
		else
			return (0);
	}*/
	(void)game;
	(void)str;
	return (0);
}

static void	finish_game(t_game *game, char *str)
{
	clear_game(game);
	if (str)
		free(str);
}

void	play_gane(t_game *game)
{
	char	*str;

	render_game(game);
	str = readline("Enter imput: ");
	if (!str)
	{
		clear_game(game);
		return;
	}
	while (ft_strncmp(str, "q", 2))
	{
		if (move(game, str) > 0)
			break;
		render_game(game);
		//is_end(game)
		str = readline("Enter imput: ");
		if (!str)
		{
			clear_game(game);
			return;
		}
	}
	finish_game(game, str);
}
