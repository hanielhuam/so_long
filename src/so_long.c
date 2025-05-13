/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:08:41 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/12 21:21:16 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**board_game;

	if (argc != 2)
		return (0);

	fd = open(argv[1], O_RDONLY);
	
	str = get_next_line(fd);
	ft_printf("%s\n", str);
	free(str);
	close(fd);
	return (0);
}
