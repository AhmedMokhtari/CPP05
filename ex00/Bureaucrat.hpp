#pragma once 
#include <iostream>
#include <string>
#include <exception>

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
};  
std::ostream& operator<<(std::ostream &stream, Bureaucrat &b);