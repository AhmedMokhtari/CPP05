#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("a ", 1);
    Bureaucrat b("Allo ", 20);

    std::cout <<"a getGrade = " <<  a.getGrade() << std::endl;
    try{
        a.increment();
        std::cout << "this will not be printed \n" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "there is an exception " << e.what();
    }
    try{
        a.decrement();
        std::cout << "a getGrade = " << a.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
    try{
        b.decrement();
        b.decrement();
    }catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}