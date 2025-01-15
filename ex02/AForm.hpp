#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm{
    private:
        const std::string name;
        bool is_sign;
        const int grade_sign;
        const int grade_ex;
    public:
        AForm();
        AForm(const std::string name, int grade_sign, int grade_ex);
        AForm(const AForm &cp);
        ~AForm();
        AForm &operator=(const AForm &cp);
        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw();
        };
        virtual void beSigned(Bureaucrat b) = 0;
        virtual execute(Bureaucrat const & executor) const = 0;
        const std::string getName() const;
        int getGrade_ex() const;
        int getGrade_sign() const;
        bool getIsSign() const;
};