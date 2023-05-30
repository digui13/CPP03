#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

		string 	_name;

	public:

		DiamondTrap(void);
		DiamondTrap(string name);
		DiamondTrap(DiamondTrap &obj);
		~DiamondTrap(void);
		DiamondTrap& operator=(const DiamondTrap &obj);
		
		string getName(void);

		void attack(const string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		void whoAmI();

};

#endif