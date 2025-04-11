#include "DiamondTrap.hpp"

int main() {
  DiamondTrap diamond("DI4M-TP");

  diamond.attack("Enemy");
  diamond.takeDamage(30);
  diamond.beRepaired(20);

  diamond.guardGate();
  diamond.highFivesGuys();
  diamond.whoAmI();

  return 0;
}
