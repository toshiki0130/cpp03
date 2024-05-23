#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp" 
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string _name;
public:
    // Orthodox Canonical Form
    DiamondTrap();
    DiamondTrap(const DiamondTrap &ob);
    ~DiamondTrap();
    DiamondTrap& operator=(const DiamondTrap &ob);
    // others
    DiamondTrap(const std::string &name);
    void attack(const std::string &target);
    void whoAmI();
};

#endif