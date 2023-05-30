#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{

	cout << endl << "| CLAPTRAP |" << endl << endl;

	ClapTrap ct1("s1mple");
	ClapTrap ct2("n1ko");

	ct1.setAttack(5);

	ct1.attack(ct2.getName());
	ct2.takeDamage(ct1.getAttack());

	ct2.beRepaired(4);

	cout << endl << "| SCAVTRAP |" << endl << endl;

	ScavTrap st1("monesy");
	ScavTrap st2("fnx");

	st1.setAttack(5);

	st1.attack(st2.getName());
	st2.takeDamage(st1.getAttack());

	st2.beRepaired(4);

	cout << endl << "| FRAGTRAP |" << endl << endl;

	FragTrap ft1("GeTRiGhT");
	FragTrap ft2("KennyS");

	ft1.setAttack(5);

	ft1.attack(ft2.getName());
	ft2.takeDamage(ft1.getAttack());

	ft2.beRepaired(4);
	ft2.highFivesGuys();

	cout << endl << "| DISPAWNS |" << endl << endl;

	return (0);
}