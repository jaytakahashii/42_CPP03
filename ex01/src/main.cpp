#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  ScavTrap scav("Serena");

  scav.attack("Enemy1");
  scav.guardGate();
  scav.takeDamage(30);
  scav.beRepaired(20);

  return 0;
}
