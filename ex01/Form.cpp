#include "Form.hpp"

Form::Form():name("no_name"), is_sign(0),grade_sign(75), grade_ex(75)
{

}

Form::Form(const std::string name, int grade_sign, int grade_ex):name(name), is_sign(0),grade_sign(grade_sign), grade_ex(grade_ex)
{

}

Form::Form(const Form &cp):name(cp.name), is_sign(cp.is_sign), grade_sign(cp.grade_sign), grade_ex(cp.grade_ex){

}

Form::~Form(){

}

Form &Form::operator=(const Form &cp){
    if (this != &cp)
    {
        this->is_sign = cp.is_sign;
    }
    return *this;
}

const char *Form::GradeTooHighException::what() const throw(){
    return "Grade too High ";
}

const char *Form::GradeTooLowException::what() const throw(){
    return "Grade too Low ";
}

void Form::beSigned(Bureaucrat b){
    if (b.getGrade() > this->grade_sign)
        throw GradeTooLowException();
    is_sign = true;
    std::cout << "Form Has been signed \n";
}

const std::string Form::getName() const{
    return this->name;
}

int Form::getGrade_ex() const{
    return this->grade_ex;
}

int Form::getGrade_sign() const{
    return this->grade_sign;
}

bool Form::getIsSign() const{
    return this->is_sign;
}