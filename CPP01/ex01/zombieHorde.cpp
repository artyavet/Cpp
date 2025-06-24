#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* z = new Zombie[N];

	int i;
	for (i = 0; i < N; i++)
		z[i].set_name(name);
	return (z);
}