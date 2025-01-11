#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("a ", 0);
    Bureaucrat b("Allo ", 20);
    // try{
    //     Bureaucrat c("sdfsdf", 100);
    //     std::cout << c.getGrade() << std::endl;
    // }catch(std::exception &e)
    // {
    //     std::cout << e.what();
    // } 


    std::cout << a.getGrade() << std::endl;
    try{
        a.increment();
        std::cout << "this will not be printed \n" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "there is an exceotion " << e.what();
    }
    try{
        a.decrement();
        std::cout << a.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}