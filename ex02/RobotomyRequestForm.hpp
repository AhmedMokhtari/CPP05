#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    private:
        std::string target;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &cp);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator =(const RobotomyRequestForm &cp);
        void execute(Bureaucrat const & executor) const;
};