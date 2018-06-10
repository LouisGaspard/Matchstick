##
## EPITECH PROJECT, 2018
## unitair
## File description:
## unitair
##

SRC_DIR		=	$(realpath ../src)

SRC_DIR_INFINADD=	$(realpath ../infinadd/src)

SRC		=	$(SRC_DIR)/errors.c		\
			$(SRC_DIR)/get_input.c		\
			$(SRC_DIR)/get_next_line.c	\
			$(SRC_DIR)/ia.c			\
			$(SRC_DIR)/map.c		\
			$(SRC_DIR)/your_turn.c

SRC_UT_DIR	=	$(realpath .)

SRC_UT		=	$(SRC_UT_DIR)/tests_errors.c	\
			$(SRC_UT_DIR)/tests_input.c	\
			$(SRC_UT_DIR)/tests_mia.c

OBJ		=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS		=	-Wall -Wextra

CFLAGS		+=	-I ../include

LDFLAGS		=	-L ../lib/my/ -lmy -lcriterion -lgcov

NAME		=	units

CC		=	gcc --coverage

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C ../lib/my/
		cc -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

clean:
		$(MAKE) clean -C ../lib/my/
		rm -f $(OBJ)
		rm -f $(SRC_DIR)/*.g*
		rm -f $(SRC_UT_DIR)/*g*

fclean:		clean
		$(MAKE) fclean -C ../lib/my/
		rm -f $(NAME)

re:		fclean all
