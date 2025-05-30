/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:34:10 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/19 21:32:31 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	validate_file(char *file)
{
	int		fd;
	char	*temp;

	if (!file || !*file)
	{
		ft_putstr_fd("empty file name\n", 2);
		return (-1);
	}
	temp = ft_strrchr(file, '.');
	if (!temp || ft_strncmp(temp, ".ber", 5))
	{
		ft_putstr_fd("is not a .ber file\n", 2);
		return (-1);
	}
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_putstr_fd("was not possible to open this file\n", 2);
	return (fd);
}
