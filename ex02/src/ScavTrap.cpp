#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    _hitPoints = _default_hit_points;
    _energyPoints = _default_energy_points;
    _attackDamage = _default_attack_damage;
    std::cout << "ScavTrap default constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ob) : ClapTrap(ob) {
    std::cout << "ScavTrap copy constructor is called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor is called: the name is " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ob) {
    ClapTrap::operator=(ob);
    std::cout << "ScavTrap Copy assignment operator is called" << std::endl;
    return *this;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = _default_hit_points;
    _energyPoints = _default_energy_points;
    _attackDamage = _default_attack_damage;
    std::cout << "ScavTrap constructor is called: the name is " << this->_name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!_hasHitPoint()) return;
    if (!_hasEnergyPoint()) return;
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
}

// This member function will display a message informing that ScavTrap is now in Gate keeper mode.
void ScavTrap::guardGate()
{
    if (!_hasHitPoint()) return;
    if (!_hasEnergyPoint()) return;
    std::cout << "Now, ScavTrap's status is  gate keeper mode!" << std::endl;
}

