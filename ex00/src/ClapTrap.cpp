#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
    : _name(""),
      _hitPoints(DEFAULT_HIT_POINTS),
      _energyPoints(DEFAULT_ENERGY_POINTS),
      _attackDamage(DEFAULT_ATTACK_DAMAGE) {
    std::cout << "default constructor is called: " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ob)
    : _name(ob._name),
      _hitPoints(ob._hitPoints),
      _energyPoints(ob._energyPoints),
      _attackDamage(ob._attackDamage) {
    std::cout << "Copy constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor is called: name is " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ob)
{
    if (this == &ob) return *this;
    _name = ob._name;
    _hitPoints = ob._hitPoints;
    _energyPoints = ob._energyPoints;
    _attackDamage = ob._attackDamage;
    std::cout << "Copy assignment operator is called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name),
      _hitPoints(DEFAULT_HIT_POINTS),
      _energyPoints(DEFAULT_ENERGY_POINTS),
      _attackDamage(DEFAULT_ATTACK_DAMAGE) {
    std::cout << "constructor is called: the name is " << this->_name << std::endl;
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

void ClapTrap::attack(const std::string& target)
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
