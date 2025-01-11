#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("no_name"), grade(75){
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat::Bureaucrat(const Bureaucrat &cp):name(cp.name), grade(cp.grade)
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cp){
    if (this != &cp)
    {
        // this->name = cp.name;
        this->grade = cp.grade;       
    }
    return *this;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade):name(name){
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 0)
        throw GradeTooHighException();
    this->grade = grade;
}

std::string Bureaucrat::getName() const {
    return this->name;
}

int  Bureaucrat::getGrade() const {
    return this->grade;
} 

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high \n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too Low \n";
}

void Bureaucrat::increment()
{
    if (this->grade <= 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrement()
{
    if (this->grade >= 150)
        throw GradeTooLowException();
    this->grade++;
}

std::ostream& operator<<(std::ostream &stream, Bureaucrat &b){
    stream <<  b.getName() << ", bureaucrat grade " << b.getGrade();
    return stream;
}