SRCS = main.cpp AMateria.cpp

OBJS= $(SRCS:%.cpp=%.o)

C = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Animal

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(FLAGS) $^ -o $@

%.o:%.cpp *.hpp
	$(C) $(FLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean 