NAME	= megaphone
SRCS	= main.cpp Phonebook.cpp Contact.cpp Utils.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

%.o: %.cpp Phonebook.hpp Contact.hpp Utils.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
