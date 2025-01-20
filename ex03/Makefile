NAME = BureauCrat

OBJ = main.o Bureaucrat.o  AForm.o PresidentialPardonForm.o ShrubberyCreationForm.o RobotomyRequestForm.o Intern.o

CPPFLAG = -Wall -Wextra -Werror -std=c++98

INCLUDE = Bureaucrat.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp Intern.hpp AForm.hpp 

all : $(NAME)

$(NAME) : $(OBJ)
		c++ $(CPPFLAG) $(OBJ) -o $(NAME)

%.o : %.cpp $(INCLUDE) 
	c++ -c $(CPPFLAG) $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all