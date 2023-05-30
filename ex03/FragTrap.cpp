#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	cout	<<	"Spawn Default FragTrap!"
			<<	endl;
	_name = "The FragTrap";
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(string name)
{
	cout	<<	"Spawn FragTrap!"
			<<	endl;
	_name = name;
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(FragTrap &obj)
{
	cout	<<	"FragTrap Copy Constructor Used!"
			<<	endl;
	*this = obj;
}

FragTrap::~FragTrap()
{
	cout	<<	"Dispawn FragTrap!"
			<<	endl;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	cout	<<	"Assignate FragTrap!"
			<<	endl;
	_name = obj._name;
	_health = obj._health;
	_energy = obj._energy;
	_attack = obj._attack;

	return *this;
}

void FragTrap::attack(const string &target)
{
	if (_health <= 0)
	{
		cout	<<	"FragTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		if (_energy > 0)
		{
			cout	<<	"FragTrap "
					<<	_name
					<<	" attacks "
					<<	target
					<<	", causing "
					<<	_attack
					<<	" points of damage!"
					<<	"!"
					<<	endl;
			_energy--;
		}
		else
		{
			cout	<<	"FragTrap "
					<<	_name
					<<	" has not enougth energy!"
					<<	endl;
		}
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (_health <= 0)
	{
		cout	<<	"FragTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		cout	<<	"FragTrap "
				<<	_name
				<<	" toke "
				<<	amount
				<<	" damage!"
				<<	endl;
		_health -= amount;
		if (_health <= 0)
		{
			cout	<<	"FragTrap "
					<<	_name
					<<	" dies!"
					<<	endl;
			_energy = 0;
			_health = 0;
			_attack = 0;
		}
	}	
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_health <= 0)
	{
		cout	<<	"FragTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		if (_energy > 0)
		{
			cout	<<	"FragTrap "
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
			cout	<<	"FragTrap "
					<<	_name
					<<	" has not enougth energy!"
					<<	endl;
		}
	}
}

string FragTrap::getName(void)
{
	return (this->_name);
}

void FragTrap::highFivesGuys(void)
{
	cout	<<	"FragTrap "
			<<	_name
			<<	" is now high five u! :)"
			<<	endl;
}