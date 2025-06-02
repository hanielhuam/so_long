CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRC_DIR = src
OBJ_DIR = obj
LIBFT_DIR = libft
LIBFT = ${LIBFT_DIR}/bin/libft.a
LDFLAGS = -L${LIBFT_DIR}/bin -lft -Lmlx_linux -lmlx_Linux -L/usr/lib -lXext -lX11 -lm -lz
INCLUDE = -Iinclude -I${LIBFT_DIR}/include -Imlx_linux

SRCS = ${SRC_DIR}/so_long.c ${SRC_DIR}/treat_args.c \
	   ${SRC_DIR}/validate_file.c ${SRC_DIR}/read_file.c \
	   ${SRC_DIR}/validate_board.c ${SRC_DIR}/make_game.c \
	   ${SRC_DIR}/how_many.c ${SRC_DIR}/play_game.c ${SRC_DIR}/clear_game.c \
	   ${SRC_DIR}/move.c ${SRC_DIR}/render.c ${SRC_DIR}/whereis.c \
	   ${SRC_DIR}/validate_caracters.c ${SRC_DIR}/validate_walls.c \
	   ${SRC_DIR}/validate_possible_path.c ${SRC_DIR}/show_game.c \
	   ${SRC_DIR}/finish.c ${SRC_DIR}/handlers.c
	   
OBJS = ${SRCS:${SRC_DIR}/%.c=${OBJ_DIR}/%.o}

NAME = so_long

all: ${NAME}

$(NAME): ${LIBFT} ${OBJS}
	$(CC) ${CFLAGS} ${OBJS} ${LDFLAGS} -lreadline -o ${NAME}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) ${INCLUDE} -O3 -c $< -o $@

${LIBFT}:
	make -C ${LIBFT_DIR}

clean:
	rm -rf ${OBJ_DIR} && make -C ${LIBFT_DIR} clean

fclean: clean
	rm -rf ${NAME} && rm -rf ${LIBFT}

re: fclean all
