#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  ClapTrap clap("CL");
  ScavTrap scav("SC");
  FragTrap frag("FR");

  clap.attack("Bandit");
  scav.attack("Psycho");
  frag.attack("Raid Boss");

  clap.takeDamage(5);
  scav.takeDamage(20);
  frag.takeDamage(50);

  clap.beRepaired(3);
  scav.beRepaired(15);
  frag.beRepaired(40);

  scav.guardGate();
  frag.highFivesGuys();

  return 0;
}
