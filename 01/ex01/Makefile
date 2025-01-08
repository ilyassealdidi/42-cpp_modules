SRCS = main.cpp Zombie.cpp zombieHorde.cpp
INCS = Zombie.hpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombie

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	c++ $(OBJS) -o $(NAME)

%.o: %.cpp Zombie.hpp
	c++ $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean