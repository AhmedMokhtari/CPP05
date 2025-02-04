#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5){
    target = "No_Target";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):AForm("PresidentialPardonForm", 25, 5){
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp):AForm(cp){
    this->target = cp.target;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm &PresidentialPardonForm::operator =(const PresidentialPardonForm &cp){
    if (this != &cp)
        this->target = cp.target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    check_execute(executor);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}