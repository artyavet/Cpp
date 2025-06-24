#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char** argv)
{
    if (argc == 1)
        std::cout << "Invalid count of argument" << std::endl;
    else
    {
        for(int i = 1; i < argc; i++) {
            std::string str = argv[i];
        for(size_t j = 0; j < str.length(); j++) {
            str[j] = std::toupper(str[j]);
        }
        std::cout << "str = " << str << std::endl;
        }
    }
    return (0);
}

