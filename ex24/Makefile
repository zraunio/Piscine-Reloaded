NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c ./srcs/ft_swap.c

OUTPUT = ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o

HDR_SRC= ./includes

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HDR_SRC)
	ar rc $(NAME) $(OUTPUT)

clean:
	rm -f $(OUTPUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
