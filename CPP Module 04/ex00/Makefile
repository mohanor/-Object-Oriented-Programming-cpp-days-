NAME = animal

src = Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

CC = c++

obj = $(src:.cpp=.o)

flags = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(obj)
	$(CC)  $(flags) $(obj) -o $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(flags) -c $< -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all