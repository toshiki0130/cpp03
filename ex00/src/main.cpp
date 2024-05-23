#include "ClapTrap.hpp"

int main()
{
    {
        std::cout << "===Orthodox Canonical Form===" << std::endl;
        ClapTrap a; // default constructor
        ClapTrap b(a); // copy constructor
        ClapTrap c("C"); // normal constructor
        ClapTrap d = c; // copy constructor
        a = c; // Copy assignment operator
    }
    {
        
    }
    {
        // test attack
        std::cout << "=== test attack ==" << std::endl;
        ClapTrap a("zidane");
        for (int i = 1; i <= 11; i++) {
            std::cout << i << ": ";
            a.attack("ronaudinyo");
        }
    }
    {
        // be rapaired
        std::cout << "=== be repaired ==" << std::endl;
        ClapTrap a("zidane");
        for (int i = 1; i <= 11; i++) {
            std::cout << i << ": ";
            a.beRepaired(i);
        }
    }
    {
        // take damage
        std::cout << "=== take damage ==" << std::endl;
        ClapTrap a("zidane");
        a.takeDamage(10);
        a.attack("You!");
    }
}