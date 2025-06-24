#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *str_p = &str;
    std::string &str_a = str;

    std::cout << &str << std::endl;
    std::cout << str_p << std::endl;
    std::cout << &str_a << std::endl;

    std::cout << "values" << std::endl;
    std::cout <<  str << std::endl;
    std::cout << *str_p << std::endl;
    std::cout << str_a << std::endl;
}