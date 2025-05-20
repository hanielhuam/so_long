
#include	"so_long.h"

char **treat_args(char	*file)
{
	char	**board;
	int	fd;
	fd = validate_file(file);
	if (fd < 0)
		return (NULL);
	board = read_file(fd);
	if (!board)
		return (NULL);

	return (board);
}
