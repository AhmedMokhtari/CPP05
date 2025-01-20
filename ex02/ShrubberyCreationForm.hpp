#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    private:
        std::string target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &cp);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator =(const ShrubberyCreationForm &cp);
        void execute(Bureaucrat const & executor) const;
};