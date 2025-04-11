#include "DiamondTrap.hpp"

int main() {
  DiamondTrap dt("DIAMOND");

  dt.whoAmI();

  dt.attack("TargetBot");

  dt.takeDamage(5);
  dt.beRepaired(3);

  dt.highFivesGuys();
  dt.guardGate();

  return 0;
}
