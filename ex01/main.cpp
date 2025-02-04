#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{

    Bureaucrat a("a ", 1);
    Bureaucrat b("b ", 69);

    Form f("form ", 10, 10);
    Form f1("form1 ", 10, 10);

    try{
        f.beSigned(a);
        f1.beSigned(b);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }


    std::cout << "Form  is signed : " << f.getIsSign() << std::endl;
    std::cout << "Form 1 is signed : " << f1.getIsSign() << std::endl;
}