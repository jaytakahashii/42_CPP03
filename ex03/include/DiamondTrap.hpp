#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 private:
  std::string _name;

 public:
  DiamondTrap(std::string name);
  ~DiamondTrap();

  void whoAmI();
  void attack(const std::string &target);
};
