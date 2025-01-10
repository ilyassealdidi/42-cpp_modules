NAME	= ctrl_f
SRCS	= main.cpp NoSed.cpp
INCS	= NoSed.hpp
OBJS	= $(SRCS:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

%.o: %.cpp $(INCS)
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
