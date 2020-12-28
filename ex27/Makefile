NAME = ft_display_file

SRC = ./ft_display_file.c

OUTPUT = ft_display_file.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)
	chmod 755 $(NAME)

clean:
	rm -f $(OUTPUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
