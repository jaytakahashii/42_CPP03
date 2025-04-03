#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (_hitPoints <= 0) {
    std::cout << "ClapTrap " << _name
              << " has no hit points left and cannot attack!" << std::endl;
    return;
  }
  if (_energyPoints <= 0) {
    std::cout << "ClapTrap " << _name
              << " has no energy left and cannot attack!" << std::endl;
    return;
  }
  _energyPoints--;
  std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (_hitPoints <= 0) {
    std::cout << "ClapTrap " << _name << " is already down!" << std::endl;
    return;
  }
  _hitPoints -= amount;
  if (_hitPoints < 0)  // hp is not negative
    _hitPoints = 0;
  std::cout << "ClapTrap " << _name << " takes " << amount << " damage! "
            << "Remaining HP: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_hitPoints <= 0) {
    std::cout << "ClapTrap " << _name
              << " has no hit points left and cannot be repaired!" << std::endl;
    return;
  }
  if (_energyPoints <= 0) {
    std::cout << "ClapTrap " << _name
              << " has no energy left and cannot be repaired!" << std::endl;
    return;
  }
  _energyPoints--;
  _hitPoints += amount;
  std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount
            << " hit points! New HP: " << _hitPoints << std::endl;
}
