#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
int main()
{
    Bureaucrat a("a ", 5);
    
    RobotomyRequestForm R("Robot");
    ShrubberyCreationForm S("Shrubbery");
    S.beSigned(a);
    R.beSigned(a);
    // std::terminate();
    try{
        S.execute(a);
        R.execute(a);
    }catch(const std::exception &e){
        std::cout << e.what() <<std::endl;
    }

    // Bureaucrat b("b ", 69);




    // Form f("form ", 10, 10);
    // Form f1("form1 ", 10, 10);

    // f.beSigned(a);
    // try{
    //     f1.beSigned(b);
    // }
    // catch(std::exception &e){
    //     std::cout << e.what() << std::endl;
    // }
}