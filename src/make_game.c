

#include "so_long.h"

t_game	*make_game(char	**board)
{
	t_game	*game;

	game = ft_calloc(1, sizeof(t_game));

	game->board = board;
	game->collectables = how_many('C', board);
	game->movements = 0;
	whereis('P', &game->px, &game->py, game->board);
	return (game);
}
