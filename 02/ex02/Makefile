SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
INCS = Fixed.hpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = fixed

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

%.o: %.cpp $(INCS)
	c++ $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean