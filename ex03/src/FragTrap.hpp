#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
protected:
    static const int _default_hit_points = 100;
    static const int _default_energy_points = 100;
    static const int _default_attack_damage = 30;
public:
    // Orthodox Canonical Form
    FragTrap();
    FragTrap(const FragTrap &ob);
    ~FragTrap();
    FragTrap& operator=(const FragTrap &ob);
    // others
    FragTrap(const std::string &name);
    void highFivesGuys();
};

#endif