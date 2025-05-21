

#include "so_long.h"

//Validar se existe os caracteres e a quantidade de caracteres
//	fazer uma função de validação para ver se há caracteres fora do escopo
//	fazer uma função de validação para cada caracter do escopo.

static int	validate_scope(char **board)
{
	while (*board)
	{
		while (**board)
		{
			if (!ft_strchr(SCOPE, **board++))
			{
				ft_putstr_fd("uso de caracter proibido", 2);
				return (1);
			}
		}
		*board++;
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
