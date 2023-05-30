#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap(void);
		FragTrap(string name);
		FragTrap(FragTrap &obj);
		~FragTrap(void);
		FragTrap& operator=(const FragTrap &obj);
		
		string getName(void);

		void attack(const string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		void highFivesGuys(void);

};

#endif