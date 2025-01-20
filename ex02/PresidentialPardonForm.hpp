#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private:
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &cp);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator =(const PresidentialPardonForm &cp);
        void execute(Bureaucrat const & executor) const;
};