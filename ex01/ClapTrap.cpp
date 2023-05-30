#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	cout	<<	"Spawn Default ClapTrap!"
			<<	endl;
	_name = "The ClapTrap";
	_health = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(string name)
{
	cout	<<	"Spawn ClapTrap!"
			<<	endl;
	_name = name;
	_health = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	cout	<<	"ClapTrap Copy Constructor Used!"
			<<	endl;
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	cout	<<	"Dispawn ClapTrap!"
			<<	endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	cout	<<	"Assignate ClapTrap!"
			<<	endl;
	_name = obj._name;
	_health = obj._health;
	_energy = obj._energy;
	_attack = obj._attack;

	return *this;
}

void ClapTrap::attack(const string &target)
{
	if (_health <= 0)
	{
		cout	<<	"ClapTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		if (_energy > 0)
		{
			cout	<<	"ClapTrap "
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
			cout	<<	"ClapTrap "
					<<	_name
					<<	" has not enougth energy!"
					<<	endl;
		}
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_health <= 0)
	{
		cout	<<	"ClapTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		cout	<<	"ClapTrap "
				<<	_name
				<<	" toke "
				<<	amount
				<<	" damage!"
				<<	endl;
		_health -= amount;
		if (_health <= 0)
		{
			cout	<<	"ClapTrap "
					<<	_name
					<<	" dies!"
					<<	endl;
			_energy = 0;
			_health = 0;
			_attack = 0;
		}
	}	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_health <= 0)
	{
		cout	<<	"ClapTrap "
				<<	_name
				<<	" is already dead!"
				<<	endl;
	}
	else
	{
		if (_energy > 0)
		{
			cout	<<	"ClapTrap "
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
			cout	<<	"ClapTrap "
					<<	_name
					<<	" has not enougth energy!"
					<<	endl;
		}
	}
}

string ClapTrap::getName(void)
{
	return (this->_name);
}

int ClapTrap::getAttack(void){
	return (this->_attack);
}

void ClapTrap::setAttack(int value)
{
	this->_attack = value;
}