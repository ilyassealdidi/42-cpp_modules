NAME = converter
SRCS = ScalarConverter.cpp main.cpp 
OBJS = $(SRCS:.cpp=.o)
INCS = ScalarConverter.hpp 
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INCS) 
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all