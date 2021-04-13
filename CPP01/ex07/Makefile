NAME		=	replace

SRCS		=	main.cpp
OBJS		=	$(SRCS:.cpp=.o)
CC		=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

$(NAME)		:	$(OBJS)
			$(CC) $(CFLAGS) $^ -o $@

all		:	$(NAME)

clean		:
			rm -f $(OBJS)

fclean		:	clean
			rm -f $(NAME) *.replace

re		:	fclean all

.PHONY		:	all clean fclean re
