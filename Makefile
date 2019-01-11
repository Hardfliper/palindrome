##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	src/main.c	\
		src/check_pal.c

NOMAIN	=	src/check_pal.c	\

NAME	=	palindrome

CRITNAME =	unit_test

CPPFLAGS =	-I ./include

LDFLAGS	=	-L ./lib/my/ -lmy

OBJ	=	$(SRC:.c=.o)

TEST	=	./tests/test.c

TEMP     =	*.gcno	\
		*.gcda

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		make -C ./lib/my/
		gcc -o $(NAME) $(OBJ) $(LIB) $(LDFLAGS)

test_run:
	gcc -o $(CRITNAME) $(NOMAIN) $(TEST) $(LDFLAGS) --coverage -lcriterion
	./unit_test

clean	:
		rm -f $(OBJ)
		rm -f $(TEMP)
		make clean -C ./lib/my/

fclean	:	clean
		rm -f $(NAME) $(CRITNAME)
		make fclean -C ./lib/my/

re	:	fclean all

.PHONY	:	all clean fclean re
