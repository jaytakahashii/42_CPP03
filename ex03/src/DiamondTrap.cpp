#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("Default_clap_name"),
      FragTrap("Default"),
      ScavTrap("Default"),
      _name("Default") {
  _hitPoints = FragTrap::_hitPoints;        // 100
  _energyPoints = ScavTrap::_energyPoints;  // 50
  _attackDamage = FragTrap::_attackDamage;  // 30

  std::cout << "DiamondTrap " << _name << " has been constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
      FragTrap(name),
      ScavTrap(name),
      _name(name) {
  _hitPoints = FragTrap::_hitPoints;        // 100
  _energyPoints = ScavTrap::_energyPoints;  // 50
  _attackDamage = FragTrap::_attackDamage;  // 30

  std::cout << "DiamondTrap " << _name << " has been constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) {
  _hitPoints = other._hitPoints;
  _energyPoints = other._energyPoints;
  _attackDamage = other._attackDamage;

  std::cout << "DiamondTrap " << _name << " has been copied!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    FragTrap::operator=(other);
    ScavTrap::operator=(other);
    _name = other._name;
  }
  std::cout << "DiamondTrap " << _name << " has been assigned!" << std::endl;
  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << _name << " has been destroyed!" << std::endl;
}

void DiamondTrap::whoAmI() {
  std::cout << BLUE "I am " << _name << ", and my ClapTrap name is "
            << ClapTrap::_name << "!" RESET << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
  ScavTrap::attack(target);
}
