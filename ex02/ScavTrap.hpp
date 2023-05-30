#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap(void);
		ScavTrap(string name);
		ScavTrap(ScavTrap &obj);
		~ScavTrap(void);
		ScavTrap& operator=(const ScavTrap &obj);
		
		string getName(void);

		void attack(const string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void guardGate(void);

};

#endif