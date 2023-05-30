#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	cout	<<	"Spawn Default ScavTrap!"
			<<	endl;
	_name = "The ScavTrap";
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(string name)
{
	cout	<<	"Spawn ScavTrap!"
			<<	endl;
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(ScavTrap &obj): ClapTrap(obj.getName())
{
	cout	<<	"ScavTrap Copy Constructor Used!"
			<<	endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	cout	<<	"Dispawn ScavTrap!"
			<<	endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	cout	<<	"Assignate ScavTrap!"
			<<	endl;
	_name = obj._name;
	_health = obj._health;
	_energy = obj._energy;
	_attack = obj._attack;

	return *this;
}

void ScavTrap::attack(const string &target)
{
	if (_health <= 0)
	{
		cout	<<	"ScavTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		if (_energy > 0)
		{
			cout	<<	"ScavTrap "
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
			cout	<<	"ScavTrap "
					<<	_name
					<<	" has not enougth energy!"
					<<	endl;
		}
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (_health <= 0)
	{
		cout	<<	"ScavTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		cout	<<	"ScavTrap "
				<<	_name
				<<	" toke "
				<<	amount
				<<	" damage!"
				<<	endl;
		_health -= amount;
		if (_health <= 0)
		{
			cout	<<	"ScavTrap "
					<<	_name
					<<	" dies!"
					<<	endl;
			_energy = 0;
			_health = 0;
			_attack = 0;
		}
	}	
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_health <= 0)
	{
		cout	<<	"ScavTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		if (_energy > 0)
		{
			cout	<<	"ScavTrap "
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
			cout	<<	"ScavTrap "
					<<	_name
					<<	" has not enougth energy!"
					<<	endl;
		}
	}
}

string ScavTrap::getName(void)
{
	return (this->_name);
}

void ScavTrap::guardGate(void)
{
	cout	<<	"ScavTrap "
			<<	_name
			<<	" is now in Gate keeper mode!"
			<<	endl;
}