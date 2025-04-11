#include "ScavTrap.hpp"

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
  if (_hitPoints == 0) {
    std::cout << RED << _name
              << " is already down and cannot attack! Oh Serena!" RESET
              << std::endl;
    return;
  }
  if (_energyPoints == 0) {
    std::cout << RED << _name
              << " has no energy left and cannot attack! Oh Serena!" RESET
              << std::endl;
    return;
  }
  _energyPoints--;
  std::cout << YELLOW << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage! Oh Serenaaaaaaa" RESET
            << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << BLUE << _name << " is now in Gate Keeper mode!" RESET
            << std::endl;
}
