NAME = phonebook

src = PhoneBook.cpp Contact.cpp main.cpp

obj = $(src:.cpp=.o)

flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(obj) 
	c++  $(flags) $(obj) -o $(NAME)

%.o: %.c PhoneBook.hpp Contact.hpp
	c++ $(flags) -c $< -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all