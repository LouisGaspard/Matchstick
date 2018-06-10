##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

NAME	= matchstick

CC	= gcc

RM	= rm -f

SRCS	=	./src/main.c		\
		./src/map.c		\
		./src/errors.c		\
		./src/get_input.c	\
		./src/ia.c		\
		./src/your_turn.c	\
		./src/matchstick.c	\
		./src/get_next_line.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/

CFLAGS += -W -Wall -Wextra

LIB	= -L ./lib/ -lmy

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./lib/my/
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)

tests_run:
	make -C ./tests/
	./tests/units

clean:
	make clean -C ./lib/my/
	make clean -C ./tests/
	$(RM) $(OBJS)

fclean: clean
	$(RM) ./lib/libmy.a
	$(RM) ./tests/units
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
