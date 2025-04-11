#include "ClapTrap.hpp"

int main() {
  ClapTrap robot("Robo");

  robot.attack("Enemy");
  robot.takeDamage(5);
  robot.beRepaired(3);

  return 0;
}
