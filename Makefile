NAME 	=	pipex

OBJ	=	$(SRC:.c=.o)

SRC		=	test.c\

CC	=	gcc

CFLAGS	=	-Wall -Wextra

COMP	=	$(CC) $(CFLAGS)

RM		=	rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(COMP) $(OBJ) libft-main/libft.a -o $(NAME)
clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:			fclean all