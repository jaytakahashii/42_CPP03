#include "DiamondTrap.hpp"

// コンストラクタ
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

// デストラクタ
DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << _name << " has been destroyed!" << std::endl;
}

// whoAmI() の実装
void DiamondTrap::whoAmI() {
  std::cout << "I am " << _name << ", and my ClapTrap name is "
            << ClapTrap::_name << "!" << std::endl;
}
