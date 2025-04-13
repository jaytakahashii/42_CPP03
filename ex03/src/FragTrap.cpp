#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap " << _name << " has been constructed!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap " << _name << " has been constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  _hitPoints = other._hitPoints;
  _energyPoints = other._energyPoints;
  _attackDamage = other._attackDamage;
  std::cout << "FragTrap " << _name << " has been copied!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
  }
  std::cout << "FragTrap " << _name << " has been assigned!" << std::endl;
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
  std::cout << BLUE << _name << " is asking for a high five!" RESET
            << std::endl;
}
