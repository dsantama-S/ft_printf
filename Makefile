LIB		=	ft_printf.h
SRCS	=	ft_printf.c

OBJS	=	$(SRCS:.c=.o)
NAME	=	libftprintf.a
CFLAGS	=	-Wall -Werror -Wextra

$(NAME):	$(OBJS) _libft
			@ar -rcs $(NAME) $(OBJS) $(shell find libft/ -name "*.o")
			@ranlib $(NAME)

.c.o:
			@gcc -c $< -o $(<:.c=.o)

_libft:
			@make -C libft

all:		$(NAME)

clean:
			@rm -f $(OBJS)
			@make clean -C libft

fclean:		clean
			rm -f $(NAME)
			@make fclean -C libft

re:			fclean all

.PHONY:		all clean fclean re Norme