NAME	= phonebook
SRCS	= main.cpp Phonebook.cpp Contact.cpp Utils.cpp
OBJS	= $(SRCS:.cpp=.o)
INCS	= Phonebook.hpp Contact.hpp Utils.hpp
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