#include "ScavTrap.hpp"

void test_claptrap(void)
{
    {
        std::cout << "wwwwwwwwwwww Clap Trap wwwwwwwwwww" << std::endl;
        std::cout << "=== Orthodox Canonical Form ===" << std::endl;
        ClapTrap a;
        ClapTrap b(a);
        ClapTrap c("C");
        ClapTrap d = c;
        a = c;
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

void test_scavtrap(void)
{
    {
        std::cout << "wwwwwwwwwwww Scav Trap wwwwwwwwwww" << std::endl;
        std::cout << "=== Orthodox Canonical Form ===" << std::endl;
        ScavTrap a;
        ScavTrap b(a);
        ScavTrap c("C");
        ScavTrap d = c;
        a = c;
    }
    {
        // test attack
        std::cout << "=== test attack ==" << std::endl;
        ScavTrap a("zidane");
        for (int i = 1; i <= 51; i++) {
            std::cout << i << ": ";
            a.attack("ronaudinyo");
        }
    }
    {
        // be rapaired
        std::cout << "=== be repaired ==" << std::endl;
        ScavTrap a("zidane");
        for (int i = 1; i <= 51; i++) {
            std::cout << i << ": ";
            a.beRepaired(i);
        }
    }
    {
        // test no hit point
        std::cout << "=== take damage ==" << std::endl;
        ScavTrap a("zidane");
        a.takeDamage(100);
        a.attack("You!");
    }
    {
        // test no hitpoint
        std::cout << "=== take damage ==" << std::endl;
        ScavTrap a("zidane");
        a.takeDamage(100);
        a.beRepaired(10);
    }
    {
        // test guard gate mode
        std::cout << "=== guard gate ==" << std::endl;
        ScavTrap a("zidane");
        a.guardGate();
        a.takeDamage(100);
        a.guardGate();
    }
}
int main()
{
    test_claptrap();
    test_scavtrap();
}