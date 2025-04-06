NAME = serializer
SRCS = Serializer.cpp main.cpp 
OBJS = $(SRCS:.cpp=.o)
INCS = Serializer.hpp 
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCS) 
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all