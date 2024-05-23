#include "FragTrap.hpp"

FragTrap::FragTrap() {
    _hitPoints = _default_hit_points;
    _energyPoints = _default_energy_points;
    _attackDamage = _default_attack_damage;
    std::cout << "FragTrap default constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ob) : ClapTrap(ob) {
    std::cout << "FragTrap copy constructor is called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor is called: the name is " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &ob) {
    ClapTrap::operator=(ob);
    std::cout << "FragTrap Copy assignment operator is called" << std::endl;
    return *this;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
    _hitPoints = _default_hit_points;
    _energyPoints = _default_energy_points;
    _attackDamage = _default_attack_damage;
    std::cout << "FragTrap constructor is called: the name is " << this->_name << std::endl;
}

// This member function displays a positive high fives request on the standard output.
void FragTrap::highFivesGuys() {
    if (!_hasHitPoint()) return;
    if (!_hasEnergyPoint()) return;
    std::cout << "Yea!! High Five!!" << std::endl;
}