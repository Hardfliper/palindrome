##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	src/main.c	\
		src/check_pal.c

NOMAIN	=	tests/test.c	\
		src/check_pal.c	\

NAME	=	palindrome

CRITNAME =	unit_test

CPPFLAGS =	-I ./include

LDFLAGS	=	-L ./lib/my/ -lmy

CRITERION =	--coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

OBJ_TEST=	$(NOMAIN:.c=.o)

TEMP     =	*.gcno	\
		*.gcda

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		make -C ./lib/my/
		gcc -o $(NAME) $(OBJ) $(LIB) $(LDFLAGS)

tests_run:	$(OBJ)
		make -C ./lib/my/
		gcc -o $(CRITNAME) $(NOMAIN) $(LDFLAGS) $(CRITERION) $(CPPFLAGS)
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
