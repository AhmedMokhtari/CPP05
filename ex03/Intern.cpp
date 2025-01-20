#include "Intern.hpp"

Intern::Intern(){

}

Intern::~Intern(){

}

Intern::Intern(const Intern &cp){
    (void)cp;    
}

Intern &Intern::operator =(const Intern &cp){
    (void)cp;
    return *this;
}

AForm *Intern::makeShrubbery(const std::string &target){
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobot(const std::string &target){
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePresident(const std::string &target){
    return new PresidentialPardonForm(target);
}


typedef AForm *(Intern::*point)(const std::string &);

AForm *Intern::makeForm(const std::string &name, const std::string &type){
    std::string names[] = {"robotomy request", "shrubberymy request", "presidential pardon"};
    point funcs[3] = {&Intern::makeRobot, &Intern::makeShrubbery, &Intern::makePresident};
    for (size_t i = 0; i < name.length() ; i++)
    {
        if (names[i] == name)
        {
            try{
                // throw std::bad_alloc();
                return (this->*funcs[i])(type);
            }catch(const std::exception &e)
            {
                std::cerr << e.what() << std::endl;
                return NULL;
            }
        }
    }
    std::cerr << "Invalide name " << std::endl;
    return NULL;
}
