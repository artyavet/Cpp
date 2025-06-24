#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (std::cout << "Argument count error" << std::endl && 1);
    Harl	obj;
    std::string str(argv[1]);
	obj.complain(str);
}