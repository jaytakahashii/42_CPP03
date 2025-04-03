#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  if (_energyPoints > 0 && _hitPoints > 0) {
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
  } else {
    std::cout << "ScavTrap " << _name << " has no energy or hit points left!"
              << std::endl;
  }
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!"
            << std::endl;
}
