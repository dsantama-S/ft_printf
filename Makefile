LIB		=	ft_printf.h
SRCS	=	ft_printf.c 			\
			ft_control.c			\
			ft_printchar.c			\
			ft_printstr.c			\
			ft_printptr.c			\
			ft_printint.c			\
			ft_printuns.c			\
			ft_printhex.c			\
			ft_printoct.c			\
			ft_zero.c				\
			ft_flags.c				\
			ft_utilsprint.c			\
			ft_spaces.c				\
			ft_width.c				\
			ft_precision.c			\
			ft_dash.c				\
			ft_tools.c				\
			
OBJS	=	$(SRCS:.c=.o)
NAME	=	libftprintf.a
CFLAGS	=	-Wall -Werror -Wextra

$(NAME):	$(OBJS) _libft
			@ar -rcs $(NAME) $(OBJS) $(shell find libft/ -name "*.o")
			@ranlib $(NAME)

.c.o:
			gcc -Wall -Werror -Wextra -I. -c $< -o $(<:.c=.o)

_libft:
			@make -C libft

all:		$(NAME)

clean:
			rm -f $(OBJS)
			@make clean -C libft

fclean:		clean
			rm -f $(NAME)
			@make fclean -C libft

re:			fclean all

.PHONY:		all clean fclean re