NAME = libft.a

SRCS = ft_*.c
OBJ = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

REMOVE = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	@echo "compiling : $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all