#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap {
private:
    static const int _default_hit_points = 10;
    static const int _default_energy_points = 10;
    static const int _default_attack_damage = 0;
protected:
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
    ClapTrap(const std::string &name);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif