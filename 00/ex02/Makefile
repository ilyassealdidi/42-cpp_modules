NAME	= bank
SRCS	= tests.cpp Account.cpp
INCS	= Account.hpp
OBJS	= $(SRCS:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCS)
	c++ $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean