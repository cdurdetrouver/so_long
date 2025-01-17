NAME =		so_long
LIBFT_PATH =./libft
MLX_PATH =	./minilibx
LIBS =		./libft/libft.a ./minilibx/libmlx.a
CC =		cc
CFLAGS =	-Wall -Wextra -Werror -g
INCLUDES = -I ./minilibx -I ./includes -I ./libft/includes
FLAGS =		-lX11 -lXext -lm
RM =		rm -f

SRCS =	srcs/main.c\
	srcs/loop.c

UTILS = srcs/utils/singleton.c \
	srcs/utils/init.c \
	srcs/utils/map.c

PARSING = srcs/parsing/check.c \
	srcs/parsing/check_map.c

END = srcs/end/free.c\
	srcs/end/close.c

HOOK = srcs/hook/hook.c

SRCS += $(UTILS)\
	$(PARSING) \
	$(END) \
	$(HOOK)

OBJS =		$(SRCS:.c=.o)
OBJSB =		$(SRCSB:.c=.o)
DEPS =		$(SRCS:.c=.d)

OBJ_DIR = ./.build
OBJS_PREFIXED = $(addprefix $(OBJ_DIR)/, $(OBJS))
DEPS_PREFIXED = $(addprefix $(OBJ_DIR)/, $(DEPS))

all : ${NAME}

$(NAME) : $(OBJS_PREFIXED)
	$(MAKE) -C $(LIBFT_PATH) all
	$(MAKE) -C $(MLX_PATH) all
	$(CC) $(CFLAGS) $(OBJS_PREFIXED) ${LIBS} $(FLAGS) $(INCLUDES) -o ${NAME}

$(OBJ_DIR)/%.o : %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -MMD -c $< -o $@

-include $(DEPS_PREFIXED)

clean :
	$(MAKE) -C $(LIBFT_PATH) clean
	$(MAKE) -C $(MLX_PATH) clean
	$(RM) $(OBJS_PREFIXED)
	$(RM) $(DEPS_PREFIXED)
	$(RM) $(OBJSB)

fclean : clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	$(RM) ${NAME}
	$(RM) ${NAMEB}

re : fclean all

.PHONY : all clean fclean re