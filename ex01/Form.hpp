#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
    private:
        const std::string name;
        bool is_sign;
        const int grade_sign;
        const int grade_ex;
    public:
        Form();
        Form(const std::string name, int grade_sign, int grade_ex);
        Form(const Form &cp);
        ~Form();
        Form &operator=(const Form &cp);
        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw();
        };
        void beSigned(Bureaucrat b);
        const std::string getName() const;
        int getGrade_ex() const;
        int getGrade_sign() const;
        bool getIsSign() const;
};