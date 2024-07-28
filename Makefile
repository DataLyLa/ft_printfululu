NAME = libftprintf.a

FILES = ft_printf.c \
		print_base.c \
		libft/ft_absolute.c \
		libft/ft_calloc.c \
		libft/ft_memset.c \
		libft/ft_memcpy.c\
		libft/ft_putchar.c \
		libft/ft_putstring.c \
		libft/ft_num_len.c \
		libft/ft_strdup.c\
		libft/ft_strlen.c\
		libft/ft_memcpy.c

CC = cc
C_FLAGS = -Wall -Werror -Wextra

OBJS = $(FILES:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re