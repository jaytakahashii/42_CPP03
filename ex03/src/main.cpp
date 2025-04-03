#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  ClapTrap clap("CL4P-TP");
  ScavTrap scav("SC4V-TP");
  FragTrap frag("FR4G-TP");

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
