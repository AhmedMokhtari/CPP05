#include <iostream>
class test{
    public :
    test(){
        std::cout << "Test COnstructor \n" ;
    }
    test(const test &cp)
    {
        std::cout << "cOPY CONs\n";
    }
    ~test(){
        std::cout << "Test Destructor \n";
    }
};

test alo()
{
    test a;
    return a;
    //std::cout << i << std::endl;
}

int main()
{
    // int a = 5 , b = 5;
    test a = alo();
    // std::cout << a << b << std::endl;
    return 0;
}