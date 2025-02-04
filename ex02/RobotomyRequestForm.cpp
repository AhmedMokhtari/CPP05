#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45){
    target = "No_Target";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):AForm("RobotomyRequestForm", 72, 45){
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp):AForm(cp){
    this->target = cp.target;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm &RobotomyRequestForm::operator =(const RobotomyRequestForm &cp){
    if (this != &cp)
        this->target = cp.target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    check_execute(executor);
    srand(time(NULL));
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " failed to robotomized " << std::endl;
}