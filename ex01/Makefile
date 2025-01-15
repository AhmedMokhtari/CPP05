NAME = BureauCrat

OBJ = main.o Bureaucrat.o  Form.o

CPPFLAG = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
		c++ $(CPPFLAG) $(OBJ) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp
	c++ -c $(CPPFLAG) $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all