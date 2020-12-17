NAME = rush-02
SRCS = ft_putchar.c ft_atoi.c ft_data_input_error.c ft_strlen.c ft_putstr.c ft_control.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
CLEAN = rm -f
CC = cc

all:	
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		$(CLEAN) $(NAME)
fclean:
		$(CLEAN) *.o *.gch .DS_Store
norma:
		norminette
