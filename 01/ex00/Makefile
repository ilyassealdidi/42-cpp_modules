SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
INCS = Zombie.hpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombie

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