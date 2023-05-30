#include "ClapTrap.hpp"

int	main()
{
	ClapTrap ct1("s1mple");
	ClapTrap ct2("n1ko");

	ct1.setAttack(5);

	ct1.attack(ct2.getName());
	ct2.takeDamage(ct1.getAttack());

	ct2.beRepaired(4);

	return (0);
}