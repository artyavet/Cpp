#include "Zombie.hpp"

int main()
{
	std::string name_z;
    std::cout << "name = ";
	getline(std::cin, name_z);
    long int N = -11;
    while (N < 0 || N > 2147483647)
    {
        std::cout << "N = ";
        std::cin >> N;
    }
    Zombie  *zombie;
	zombie = zombieHorde(N, name_z);
    for (int i = 0; i < N; i++)
    {
        zombie[i].announce();
    }
	delete[] zombie;
    // system("leaks Moarbrainz");
    return(0);
}