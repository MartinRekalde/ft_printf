NAME = libftprintf.a

SRCS_DIR = sources/
SRCS = ft_printf.c

# Preguntar si esto esta permitido:
OBJECTS = $(addprefix $(SRC_DIR), $(SRCS:.c=.o))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."
	ar rc $(NAME) $(OBJECTS)
	gcc $(CFLAGS) -c $(SRCS)
	@echo "(•̀ᴗ•́)و $(NAME) generado!"

clean:
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)
	 @echo "¯\_(ツ)_/¯ Objectos removidos!"

fclean: clean
	$(RM) $(NAME)
	@echo "(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all

.PHONY: all clean fclean re bonus
