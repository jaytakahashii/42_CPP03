#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (_hitPoints == 0) {
    std::cout << RED "ClapTrap " << _name
              << " is already down and cannot attack!" RESET << std::endl;
    return;
  }
  if (_energyPoints == 0) {
    std::cout << RED "ClapTrap " << _name
              << " has no energy left and cannot attack!" RESET << std::endl;
    return;
  }
  _energyPoints--;
  std::cout << YELLOW "ClapTrap " << _name << " attacks " << target
            << ", causing " << _attackDamage << " points of damage!" RESET
            << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (_hitPoints == 0) {
    std::cout << RED "ClapTrap " << _name << " is already down!" RESET
              << std::endl;
    return;
  }
  if (_hitPoints <= amount) {
    std::cout << RED "ClapTrap " << _name << " takes " << amount
              << " points of damage! He's hit points reached zero and he is "
                 "down!" RESET
              << std::endl;
    _hitPoints = 0;
    return;
  }
  _hitPoints -= amount;
  std::cout << YELLOW "ClapTrap " << _name << " takes " << amount
            << " points of damage! Remaining HP: " << _hitPoints << RESET
            << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_hitPoints == 0) {
    std::cout << RED "ClapTrap " << _name
              << " is already down and cannot be repaired!" RESET << std::endl;
    return;
  }
  if (_energyPoints == 0) {
    std::cout << RED "ClapTrap " << _name
              << " has no energy left and cannot be repaired!" RESET
              << std::endl;
    return;
  }
  _energyPoints--;
  if (_hitPoints >= UINT_MAX - amount) {
    std::cout << GREEN "ClapTrap " << _name
              << " repairs itself, and he's hit points reached maximum ("
              << UINT_MAX << ")" RESET << std::endl;
    _hitPoints = UINT_MAX;
    return;
  }
  _hitPoints += amount;
  std::cout << YELLOW "ClapTrap " << _name << " repairs itself, recovering "
            << amount << " hit points! New HP: " << _hitPoints << "" RESET
            << std::endl;
}
