#pragma once

#include <limits.h>

#include <iostream>
#include <string>

#include "color.hpp"

class ClapTrap {
 protected:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;

 public:
  ClapTrap();
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &other);
  ~ClapTrap();

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
