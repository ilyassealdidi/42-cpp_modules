NAME	= ctrl_f
SRCS	= main.cpp NoSed.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

%.o: %.cpp NoSed.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
