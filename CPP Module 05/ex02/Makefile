NAME = form

src = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp
CC = c++

obj = $(src:.cpp=.o)

flags = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(obj) 
	$(CC)  $(flags) $(obj) -o $(NAME)

%.o: %.cpp Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp
	$(CC) $(flags) -c $< -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all