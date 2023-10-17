NAME = libftprintf.a

SRCS_DIR = sources/
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsig.c ft_puthex.c

# Preguntar si addprefix esta permitido:
OBJECTS = $(addprefix $(SRCS_DIR), $(SRCS:.c=.o))
DOTC = $(addprefix $(SRCS_DIR), $(SRCS))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@gcc $(CFLAGS) -c $(DOTC)
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ $(NAME) generated!"

clean:
	@$(RM) $(OBJECTS)
	@echo "¯\_(ツ)_/¯ Objects removed!"

fclean: clean
	@$(RM) $(NAME)
	@echo "(╯°□°）╯︵ ┻━┻ $(NAME) removed!"

re: fclean all

.PHONY: all clean fclean re bonus
