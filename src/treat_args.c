/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 20:48:05 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/20 21:25:45 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

char **treat_args(char	*file)
{
	char	**board;
	int	fd;
	fd = validate_file(file);
	if (fd < 0)
		return (NULL);
	board = read_file_game(fd);
	if (!board)
		return (NULL);
	while (*board)
		ft_printf("%s\n", *board++);
	return (board);
}
