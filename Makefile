NAME = fillit

SRCS = 					\
	   main.c			\
	   input.c			\
	   t_tet.c			\
	   t_col.c			\
	   t_link.c			\
	   t_link2.c		\
	   t_env.c			\
	   translate.c		\
	   grid.c			\
	   shift.c			\
	   links.c			\
	   unlink_tet.c		\
	   relink.c			\
	   dancing_links.c	\
	   semantics.c		\
	   semantics2.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft2
	gcc -Wall -Werror -Wextra  -c $(SRCS) -I libft2

clean: 
	rm -f $(OBJS)
	make clean -C libft2

fclean:
	rm -f $(OBJS) $(NAME)
	make fclean -C libft2

re: fclean all
