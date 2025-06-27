UTILS_DIR = utils

CFILES = ft_printf.c \
         $(UTILS_DIR)/ft_check_fs.c 	\
         $(UTILS_DIR)/ft_print_c.c 		\
         $(UTILS_DIR)/ft_print_str.c	\
		 $(UTILS_DIR)/ft_print_int.c	\
		 $(UTILS_DIR)/ft_print_hex.c

OFILES = $(CFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)
	make clean

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
