NAME = zombie

src = Zombie.cpp randomChump.cpp newZombie.cpp main.cpp

CC = c++

obj = $(src:.cpp=.o)

flags = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(obj)
	$(CC)  $(flags) $(obj) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CC) $(flags) -c $< -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all