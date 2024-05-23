#include "DiamondTrap.hpp"

void test_diamondtrap(void)
{
    {
        std::cout << "wwwwwwwwwwww Diamond Trap wwwwwwwwwww" << std::endl;
        std::cout << "=== Orthodox Canonical Form ===" << std::endl;
        DiamondTrap a;
        DiamondTrap b(a);
        DiamondTrap c("C");
        DiamondTrap d = c;
        a = c;
    }
    {
        std::cout << "=== attack ===" << std::endl;
        DiamondTrap dt("zidane");
        for (int i = 1; i <= 51; i++) {
            std::cout << i << ": ";
            dt.attack("Ronaudinyo");
        }
    }
    {
        std::cout << "=== be repaired ===" << std::endl;
        DiamondTrap dt("zidane");
        for (int i = 1; i <= 51; i++) {
            std::cout << i << ": ";
            dt.beRepaired(i);
        }
    }
    {
        std::cout << "=== no hit points ===" << std::endl;
        DiamondTrap dt("zidane");
        dt.takeDamage(100);
        dt.attack("Nonuadinyo");
    }
    {
        std::cout << "=== no hit points2 ===" << std::endl;
        DiamondTrap dt("zidane");
        dt.takeDamage(100);
        dt.beRepaired(10);
    }
    {
        std::cout << "=== guardGate ===" << std::endl;
        DiamondTrap dt("zidane");
        dt.guardGate();
    }
    {
        std::cout << "=== high fives guys ===" << std::endl;
        DiamondTrap dt("zidane");
        dt.highFivesGuys();
    }
    {
        std::cout << "=== who am i ===" << std::endl;
        DiamondTrap dt("zidane");
        DiamondTrap dt2;
        dt.whoAmI();
        dt2.whoAmI();
    }

}

int main()
{
    test_diamondtrap();
}