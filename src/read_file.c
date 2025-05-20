/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:38:22 by hmacedo-          #+#    #+#             */
/*   Updated: 2025/05/19 18:41:12 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//read file
//	ler todo o arquivo e tranformá-lo em uma matriz
//		caso haja um erro na leitura retorna NULL e mostra a mensgaem
//		"ocorreu erro na leitura do arquivo"
//	Juntar todo as linha em um join gigante, lembrando que o GNL retorna
//	a linha com o \n e depois de juntar as linhas splitar no \n
//		caso dê errado lembrar de dar free e colocar uma mensagem de erro
//		"Erro de alocação de memória"
//	aí sim retorna a matriz

static char	*joinall_lines(int fd)
{
	char	*s1;
	char	*s2;
	char	eof;
	char	result;
	
	s2 = get_next_line(fd);
	s1 = ft_strdup("");
	result = ft_strjoin(s1, s2);
	while (s2)

	if(s2)
	{
		
	}
	temp;
	tmep;
	if (!temp)
		


}

char    **read_file(int fd)
{
	char	*join;
	char	**split;

	join = joinall_lines(fd);
	close(fd);
	if (!split)
	{
		putstr_fd("fail to read file");
	}
	return (NULL);
}
