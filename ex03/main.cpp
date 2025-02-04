#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat b("Bu", 1);
    Intern someRandomIntern;
    AForm* robot;
    AForm* shrubbery;
    AForm* president;
    AForm* invalid;

    robot = someRandomIntern.makeForm("robotomy request", "Bender");
    shrubbery =someRandomIntern.makeForm("shrubberymy request", "alo");
    president =someRandomIntern.makeForm("presidential pardon", "alo1");

    invalid = someRandomIntern.makeForm("adsd", "Tets");

    try{
        if(invalid)
        {
            invalid->beSigned(b);
            invalid->execute(b);
        }

        if (robot)
        {
            b.signForm(*robot);
            robot->execute(b);
        }

        if (shrubbery){
            b.signForm(*shrubbery);
            shrubbery->execute(b);
        }

        if (president){
            b.signForm(*president);
            president->execute(b);
        }
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    delete robot;
    delete shrubbery;
    delete president;
    delete invalid;
}