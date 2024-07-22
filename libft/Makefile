# **************************************************************************** #
#																			  #
#														 :::	  ::::::::	#
#	Makefile										   :+:	  :+:	:+:	#
#													 +:+ +:+		 +:+	  #
#	By: gbazart <gbazart@student.42.fr>			+#+  +:+	   +#+		 #
#												 +#+#+#+#+#+   +#+			#
#	Created: 2023/11/09 12:21:53 by gbazart		   #+#	#+#			  #
#	Updated: 2024/07/22 14:50:57 by gbazart		  ###   ########.fr		#
#																			  #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
OPTION = -c -I ./includes -MMD

SRC_DIR = srcs/
SRC = ft_bzero.c \
	ft_calloc.c \
	ft_split.c \
	ft_tolower.c \
	ft_toupper.c
SRC := $(addprefix $(SRC_DIR), $(SRC))

PRINTF_DIR = printf/
PRINTF_SRC = ft_printf.c \
	ft_putchar.c \
	ft_puthex.c \
	ft_putnbr.c \
	ft_putptr.c \
	ft_putstr.c \
	ft_putu.c
PRINTF_SRC := $(addprefix $(PRINTF_DIR), $(PRINTF_SRC))

FPRINTF_DIR = fprintf/
FPRINTF_SRC = ft_fprintf.c \
	ft_putchar_fd.c \
	ft_puthex_fd.c \
	ft_putnbr_fd.c \
	ft_putptr_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_putu_fd.c
FPRINTF_SRC := $(addprefix $(FPRINTF_DIR), $(FPRINTF_SRC))

GNL_DIR = gnl/
GNL_SRC = get_next_line.c
GNL_SRC := $(addprefix $(GNL_DIR), $(GNL_SRC))

IS_DIR = is/
IS_SRC = ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isnumeric.c \
	ft_isprint.c \
	ft_isspace.c
IS_SRC := $(addprefix $(IS_DIR), $(IS_SRC))

LST_DIR = lst/
LST_SRC = ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c
LST_SRC := $(addprefix $(LST_DIR), $(LST_SRC))

MEM_DIR = mem/
MEM_SRC = ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c
MEM_SRC := $(addprefix $(MEM_DIR), $(MEM_SRC))

STR_DIR = str/
STR_SRC = ft_strchr.c \
	ft_strcmp.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c
STR_SRC := $(addprefix $(STR_DIR), $(STR_SRC))

TO_DIR = to/
TO_SRC = ft_atodbl.c \
	ft_atoi.c \
	ft_atol.c \
	ft_itoa.c
TO_SRC := $(addprefix $(TO_DIR), $(TO_SRC))

SRC += $(addprefix $(SRC_DIR), $(PRINTF_SRC)) \
	$(addprefix $(SRC_DIR), $(FPRINTF_SRC)) \
	$(addprefix $(SRC_DIR), $(GNL_SRC)) \
	$(addprefix $(SRC_DIR), $(IS_SRC)) \
	$(addprefix $(SRC_DIR), $(LST_SRC)) \
	$(addprefix $(SRC_DIR), $(MEM_SRC)) \
	$(addprefix $(SRC_DIR), $(STR_SRC)) \
	$(addprefix $(SRC_DIR), $(TO_SRC))



OBJ = $(SRC:.c=.o)
DEP = $(SRC:.c=.d)

-include $(DEP)

OBJ_DIR = ./.build
OBJ_PREFIXED = $(addprefix $(OBJ_DIR)/, $(OBJ))
DEP_PREFIXED = $(addprefix $(OBJ_DIR)/, $(DEP))

all: $(NAME)

$(NAME): $(OBJ_PREFIXED)
	ar rc $(NAME) $(OBJ_PREFIXED)

$(OBJ_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	cc $(FLAG) $(OPTION) $< -o $@

clean:
	/bin/rm -f $(OBJ_PREFIXED)
	/bin/rm -f $(DEP_PREFIXED)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

print-sources:
	@echo $(SRC)

.PHONY: all clean fclean re