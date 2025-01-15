#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    Bureaucrat a("a ", 0);
    Bureaucrat b("b ", 69);




    Form f("form ", 10, 10);
    Form f1("form1 ", 10, 10);

    f.beSigned(a);
    try{
        f1.beSigned(b);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}