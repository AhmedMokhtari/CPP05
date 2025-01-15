#include "AForm.hpp"

AForm::AForm():name("no_name"), is_sign(0),grade_sign(75), grade_ex(75)
{

}

AForm::AForm(const std::string name, int grade_sign, int grade_ex):name(name), is_sign(0),grade_sign(grade_sign), grade_ex(grade_ex)
{

}

AForm::AForm(const AForm &cp):name(cp.name), is_sign(cp.is_sign), grade_sign(cp.grade_sign), grade_ex(cp.grade_ex){

}

AForm::~AForm(){

}

AForm &AForm::operator=(const AForm &cp){
    if (this != &cp)
    {
        this->is_sign = cp.is_sign;
    }
    return *this;
}

const char *AForm::GradeTooHighException::what() const throw(){
    return "Grade too High ";
}

const char *AForm::GradeTooLowException::what() const throw(){
    return "Grade too Low ";
}

void AForm::beSigned(Bureaucrat b){
    b.signForm(*this);
    if (b.getGrade() > this->grade_sign)
        throw GradeTooLowException();
    is_sign = true;
}

const std::string AForm::getName() const{
    return this->name;
}

int AForm::getGrade_ex() const{
    return this->grade_ex;
}

int AForm::getGrade_sign() const{
    return this->grade_sign;
}

bool AForm::getIsSign() const{
    return this->is_sign;
}