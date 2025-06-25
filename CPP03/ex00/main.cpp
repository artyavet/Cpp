#include "ClapTrap.hpp"

int main()
{
    ClapTrap terorist1;

    ClapTrap terorist2("RoboWarrior");

    terorist1.attack("Enemy1");
    terorist2.attack("Enemy2");

    terorist1.takeDamage(5);
    terorist1.takeDamage(20);

    terorist1.attack("Enemy1");
    terorist2.attack("Enemy2");

    terorist1.beRepaired(5);
    terorist2.beRepaired(100);

    terorist2.takeDamage(10);
    terorist2.takeDamage(1000);
    terorist2.beRepaired(50);

    std::cout << "\n=== Energy Test ===" << std::endl;
    ClapTrap robot3("EnergyLessBot");
    for (int i = 0; i < 12; ++i) {
        robot3.attack("Target");
    }

    return 0;

}