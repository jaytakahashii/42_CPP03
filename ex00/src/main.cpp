#include "ClapTrap.hpp"

int main() {
  ClapTrap robot("Robo");

  robot.attack("Enemy");
  robot.takeDamage(5);
  robot.beRepaired(3);
  robot.attack("Enemy");
  robot.takeDamage(10);
  robot.beRepaired(5);

  return 0;
}
