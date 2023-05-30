#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	cout	<<	"Spawn Default DiamondTrap!"
			<<	endl;
	_name = "The DiamondTrap";
	ClapTrap::_name = _name + "_clap_name";
	_health = FragTrap::_health;
	_energy = 50;
	_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(string name)
{
	cout	<<	"Spawn DiamondTrap!"
			<<	endl;
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	_health = FragTrap::_health;
	_energy = 50;
	_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(DiamondTrap &obj): FragTrap(obj.getName())
{
	cout	<<	"DiamondTrap Copy Constructor Used!"
			<<	endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap()
{
	cout	<<	"Dispawn DiamondTrap!"
			<<	endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
	cout	<<	"Assignate DiamondTrap!"
			<<	endl;
	_name = obj._name;
	_health = obj._health;
	_energy = obj._energy;
	_attack = obj._attack;

	return *this;
}

void DiamondTrap::attack(const string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (_health <= 0)
	{
		cout	<<	"DiamondTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		cout	<<	"DiamondTrap "
				<<	_name
				<<	" toke "
				<<	amount
				<<	" damage!"
				<<	endl;
		_health -= amount;
		if (_health <= 0)
		{
			cout	<<	"DiamondTrap "
					<<	_name
					<<	" dies!"
					<<	endl;
			_energy = 0;
			_health = 0;
			_attack = 0;
		}
	}	
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (_health <= 0)
	{
		cout	<<	"DiamondTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		if (_energy > 0)
		{
			cout	<<	"DiamondTrap "
					<<	_name
					<<	" repaired: "
					<<	amount
					<<	" HP!"
					<<	endl;
			_health += amount;
			_energy--;
		}
		else
		{
			cout	<<	"DiamondTrap "
					<<	_name
					<<	" has not enougth energy!"
					<<	endl;
		}
	}
}

string DiamondTrap::getName(void)
{
	return (this->_name);
}

void DiamondTrap::whoAmI(void)
{
	cout	<<	"DiamondTrap "
			<<	_name
			<< 	" ClapTrap "
			<< 	ClapTrap::_name
			<<	" that is half FragTrap and half ScavTrap."
			<<	endl;
}
