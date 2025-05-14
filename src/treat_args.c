
#include	"so_long.h"

char **treat_args(char	*file)
{
	char	**board;
	int	fd;
	//validate file
	//	verificar se é NULL ou ""
	//		mensagem de erro "arquivo nulo"
	//	verificar se a terminação é .ber
	//		mensagem de erro
	//	tenta abrir o arquivo e retornar o fd.
	//	caso de errado lançar um erro "Não possível abrir este arquivo"
	//	o retorno da função ira retornar um inteiro maior que 0 no sucesso
	fd = validate_file(file);
	if (fd < 0)
		return (NULL);
	//read file
	//	ler todo o arquivo e tranformá-lo em uma matriz
	//		caso haja um erro na leitura retorna NULL e mostra a mensgaem
	//		"ocorreu erro na leitura do arquivo"
	//	Juntar todo as linha em um join gigante, lembrando que o GNL retorna
	//	a linha com o \n e depois de juntar as linhas splitar no \n
	//		caso dê errado lembrar de dar free e colocar uma mensagem de erro
	//		"Erro de alocação de memória"
	//	aí sim retorna a matriz
	board = read_file(fd);
	if (!board)
		return (NULL);

	return (board);
}
