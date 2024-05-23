#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name(""),
      _hitPoints(_default_hit_points),
      _energyPoints(_default_energy_points),
      _attackDamage(_default_attack_damage) {
    std::cout << "ClapTrap default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ob)
    : _name(ob._name),
      _hitPoints(ob._hitPoints),
      _energyPoints(ob._energyPoints),
      _attackDamage(ob._attackDamage) {
    std::cout << "ClapTrap copy constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor is called: the name is " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ob)
{
    if (this == &ob) return *this;
    _name = ob._name;
    _hitPoints = ob._hitPoints;
    _energyPoints = ob._energyPoints;
    _attackDamage = ob._attackDamage;
    std::cout << "ClapTrap Copy assignment operator is called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name),
      _hitPoints(_default_hit_points),
      _energyPoints(_default_energy_points),
      _attackDamage(_default_attack_damage) {
    std::cout << "ClapTrap constructor is called: the name is " << this->_name << std::endl;
}

bool ClapTrap::_hasHitPoint() const
{
    if (_hitPoints <= 0) {
        std::cout << _name << " has 0 hit point..." <<std::endl;
        return false;
    }
    return true;
}

bool ClapTrap::_hasEnergyPoint() const
{
    if (_energyPoints <= 0) {
        std::cout << _name << " has 0 energy point..." <<std::endl;
        return false;
    }
    return true;
}

void ClapTrap::attack(const std::string &target)
{
    if (!_hasHitPoint()) return;
    if (!_hasEnergyPoint()) return;
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if (_hitPoints < 0) _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!! now HP is " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!_hasHitPoint()) return;
    if (!_hasEnergyPoint()) return;
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repaired " << amount << " points. Current HP is " << _hitPoints << std::endl;
}
