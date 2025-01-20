#pragma once 
#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
class AForm;
class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        class GradeTooHighException : public std::exception{
            public :
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public :
                const char *what() const throw();
        }; 
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &cp);
        Bureaucrat &operator =(const Bureaucrat &cp);
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(AForm &f);
        void executeForm(AForm const & form) const;
};  
std::ostream& operator<<(std::ostream &stream, Bureaucrat &b);