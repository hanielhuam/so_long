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
#include <errno.h>
#include <string.h>

//validate file
//	verificar se é NULL ou ""
//		mensagem de erro "empty file name"
//	verificar se a terminação é .ber
//		mensagem de erro "is not a .ber file"
//	tenta abrir o arquivo e retornar o fd.
//	caso de errado lançar um erro "was not possible to open this file"
//	o retorno da função ira retornar um inteiro maior que 0 no sucesso
int     validate_file(char *file)
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
