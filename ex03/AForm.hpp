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
        virtual ~AForm();
        AForm &operator=(const AForm &cp);
        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw();
        };
        class NoSignException : public :: std::exception{
            public:
                const char *what() const throw();
        };
        virtual void beSigned(Bureaucrat &b);
        virtual void execute(Bureaucrat const & executor) const = 0;
        void check_execute(Bureaucrat const & executor) const;
        const std::string getName() const;
        int getGrade_ex() const;
        int getGrade_sign() const;
        bool getIsSign() const;
};