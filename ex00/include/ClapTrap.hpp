#pragma once

#include <limits.h>

#include <iostream>
#include <string>

#include "color.hpp"

class ClapTrap {
 private:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;

 public:
  ClapTrap(const std::string &name);
  ~ClapTrap();

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
