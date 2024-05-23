#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

# define DEFAULT_HIT_POINTS 10
# define DEFAULT_ENERGY_POINTS 10
# define DEFAULT_ATTACK_DAMAGE 0


class ClapTrap {
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
    bool _hasHitPoint() const;
    bool _hasEnergyPoint() const;
public:
    // Orthodox Canonical Form
    ClapTrap();
    ClapTrap(const ClapTrap &ob);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap &ob);
    // others
    ClapTrap(std::string name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif