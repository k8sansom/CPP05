NAME = Form

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = 	Bureaucrat.cpp \
		Form.cpp \
		main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re