NAME	=	CCF2

SRC		=	main.c \
			init.c

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror -lpthread

CC		=	cc

RM		=	rm -f
ECHO	=	echo -e

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
	@$(ECHO) '\033[0;33m> Compiled\033[0m'

clean	:
	$(RM) $(OBJ)
	@$(ECHO) '\033[0;33m> Directory cleaned\033[0m'

fclean	: clean
	$(RM) $(NAME)
	@$(ECHO) '\033[0;33m> Remove executable\033[0m'

re	: fclean all
