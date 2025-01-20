#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():AForm("no_name", 145, 137){
    target = "No_Target";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):AForm("no_name", 145, 137){
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp):AForm(cp){
    this->target = cp.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm &ShrubberyCreationForm::operator =(const ShrubberyCreationForm &cp){
    if (this != &cp)
        this->target = cp.target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    check_execute(executor);
    std::ofstream outFile((target + "_shrubbery").c_str());
    if (!outFile) {
        std::cerr << "Error opening file " << std::endl;
        return;
    }
    outFile << "               ,@@@@@@@," << std::endl;
    outFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    outFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    outFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    outFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    outFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    outFile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    outFile << "       |o|        | |         | |" << std::endl;
    outFile << "       |.|        | |         | |" << std::endl;
    outFile << "  __\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
    outFile.close();
    std::cout <<  "Tree has been Printed check it :) " << std::endl;
}