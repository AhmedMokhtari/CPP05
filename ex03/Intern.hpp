#pragma once 
#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
    private:
        AForm *makeShrubbery(const std::string &target);
        AForm *makeRobot(const std::string &target);
        AForm *makePresident(const std::string &target);
    public:
        Intern();
        ~Intern();
        Intern(const std::string &name, int grade);
        Intern(const Intern &cp);
        Intern &operator =(const Intern &cp);
        AForm *makeForm(const std::string &name, const std::string &type);
};