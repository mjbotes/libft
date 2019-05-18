NAME=libft.a

SRCS=ft_isalnum.c ft_itoa.c ft_memdel.c ft_putnbr.c ft_strclr.c ft_striter.c ft_strmapi.c ft_strnstr.c ft_tolower.c\
ft_isalpha.c ft_memalloc.c ft_memset.c ft_putnbr_fd.c ft_strcmp.c ft_striteri.c ft_strncat.c ft_strrchr.c ft_toupper.c\
ft_isascii.c ft_memccpy.c ft_putchar.c ft_putstr.c ft_strcpy.c ft_strjoin.c ft_strncmp.c ft_strsplit.c\
ft_isdigit.c ft_memchr.c ft_putchar_fd.c ft_putstr_fd.c ft_strdel.c ft_strlcat.c ft_strncpy.c ft_strstr.c\
ft_atoi.c ft_isprint.c ft_memcpr.c ft_putendl.c ft_strcat.c ft_strdup.c ft_strlen.c ft_strnequ.c ft_strsub.c\
ft_bzero.c ft_iswhitespace.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strequ.c ft_strmap.c ft_strnew.c ft_strtrim.c

OBJECTS=ft_isalnum.o ft_itoa.o ft_memdel.o ft_putnbr.o ft_strclr.o ft_striter.o ft_strmapi.o ft_strnstr.o ft_tolower.o\
ft_isalpha.o ft_memalloc.o ft_memset.o ft_putnbr_fd.o ft_strcmp.o ft_striteri.o ft_strncat.o ft_strrchr.o ft_toupper.o\
ft_isascii.o ft_memccpy.o ft_putchar.o ft_putstr.o ft_strcpy.o ft_strjoin.o ft_strncmp.o ft_strsplit.o\
ft_isdigit.o ft_memchr.o ft_putchar_fd.o ft_putstr_fd.o ft_strdel.o ft_strlcat.o ft_strncpy.o ft_strstr.o\
ft_atoi.o ft_isprint.o ft_memcpr.o ft_putendl.o ft_strcat.o ft_strdup.o ft_strlen.o ft_strnequ.o ft_strsub.o\
ft_bzero.o ft_iswhitespace.o ft_memcpy.o ft_putendl_fd.o ft_strchr.o ft_strequ.o ft_strmap.o ft_strnew.o ft_strtrim.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
