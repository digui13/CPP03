#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClapTrap 
{

	protected:

		string 	_name;
		int		_health;
		int		_energy;
		int		_attack;

	public:

		ClapTrap(void);
		ClapTrap(string name);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap(void);
		ClapTrap& operator=(const ClapTrap &obj);

		string getName(void);
		int getAttack(void);
		void setAttack(int value);
		
		void attack(const string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif