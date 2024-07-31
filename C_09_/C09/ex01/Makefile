HEADER = header/ft.h

SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

NAME = libft.a

OBJECTS = $(SOURCES:.c=.o)

LIB = libft.a

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

compile:
	cc $(CFLAGS) -c $(SOURCES)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS) 

clean:
	rm $(OBJECTS)

fclean: clean
	rm $(NAME)

re: fclean all
