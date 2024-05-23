#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("")
{
    std::cout << "DiamondTrap default constructor is called" << std::endl;
    ClapTrap::_name = "_clap_name";
    _hitPoints = FragTrap::_default_hit_points;
    _energyPoints = ScavTrap::_default_energy_points;
    _attackDamage = FragTrap::_default_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ob)
{
    std::cout << "DiamondTrap copy constructor is called" << std::endl;
    ClapTrap::_name = ob.ClapTrap::_name;
    _name = ob._name;
    _hitPoints = ob._hitPoints;
    _energyPoints = ob._energyPoints;
    _attackDamage = ob._attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor is called: the name is " << _name << std::endl;   
}

DiamondTrap::DiamondTrap(const std::string &name)
{
    _name = name;
    std::cout << "DiamondTrap constructor is called: the name is " << this->_name << std::endl;
    ClapTrap::_name = _name + "_clap_name";
    _hitPoints = FragTrap::_default_hit_points;
    _energyPoints = ScavTrap::_default_energy_points;
    _attackDamage = FragTrap::_default_attack_damage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &ob)
{
    ClapTrap::operator=(ob);
    ClapTrap::_name = ob.ClapTrap::_name;
    std::cout << "DiamondTrap Copy assignment operator is called" << std::endl;
    return *this;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is " << _name
    << ". ClapTrap name is " << ClapTrap::_name << "."<< std::endl;
}