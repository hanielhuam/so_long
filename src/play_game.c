/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 20:43:06 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/26 21:30:08 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <readline/readline.h>

static void	move(t_game *game, char *str)
{
		if (!ft_strncmp(str, "a", 2))
			move_p(game, 0, -1);
		else if (!ft_strncmp(str, "s", 2))
			move_p(game, 1, 0);
		else if (!ft_strncmp(str, "w", 2))
			move_p(game, -1, 0);
		else if (!ft_strncmp(str, "d", 2))
			move_p(game, 0, 1);
}

void	play_game(t_game *game)
{
	char	*str;

	render_game(game);
	str = readline("Enter imput: ");
	if (!str)
	{
		clear_game(game);
		return ;
	}
	while (ft_strncmp(str, "q", 2))
	{
		move(game, str);
		render_game(game);
		is_end(game);
		str = readline("Enter imput: ");
		if (!str)
		{
			clear_game(game);
			return ;
		}
	}
	finish_game(game, str);
}
