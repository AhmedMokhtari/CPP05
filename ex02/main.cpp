#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
int main()
{
    Bureaucrat a("a ", 6);
    Bureaucrat b("a ", 3);
    
    RobotomyRequestForm R("Robot");
    RobotomyRequestForm R1("Robot");
    PresidentialPardonForm P("Presidnet");
    PresidentialPardonForm P1("Presidnet1");
    ShrubberyCreationForm S("Shrubbery");
    try{
        S.beSigned(a);
        R.beSigned(a);
        P.beSigned(a);
        P1.beSigned(b);
        S.execute(a);
        R.execute(a);
        P.execute(b);
        P.execute(a);
    }catch(const std::exception &e){
        std::cout << e.what() <<std::endl;
    }

    try{
        R1.execute(b);
    }catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}