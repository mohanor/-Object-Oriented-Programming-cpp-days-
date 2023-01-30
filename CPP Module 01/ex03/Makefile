NAME = violence

src = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

obj = $(src:.cpp=.o)

CC = c++

flags = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(obj)
	$(CC)  $(flags) $(obj) -o $(NAME)

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(flags) -c $< -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all