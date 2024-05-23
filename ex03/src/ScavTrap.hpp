#ifndef SCAVTRAP_HPP
# define SCAVRTAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected:
    static const int _default_hit_points = 100;
    static const int _default_energy_points = 50;
    static const int _default_attack_damage = 20;
public:
    // Orthodox Canonical Form
    ScavTrap();
    ScavTrap(const ScavTrap &ob);
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap &ob);
    // others
    ScavTrap(const std::string &name);
    void attack(const std::string &target);
    void guardGate();
};

#endif