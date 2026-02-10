NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_bzero.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_strlen.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c \
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_atoi.c\
		ft_strnstr\
		ft_strchr\


OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re