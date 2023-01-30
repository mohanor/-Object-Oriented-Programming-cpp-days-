NAME = noLosersHere

src = main.cpp

obj = $(src:.cpp=.o)

CC = c++

flags = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(obj)
	$(CC)  $(flags) $(obj) -o $(NAME)

%.o: %.cpp
	$(CC) $(flags) -c $< -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all