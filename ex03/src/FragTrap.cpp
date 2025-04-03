#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap " << _name << " has been constructed!" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
  std::cout << "FragTrap " << _name << " is asking for a high five!"
            << std::endl;
}
