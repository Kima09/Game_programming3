#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "Character Created" << endl;
}

void Character::Partner(weak_ptr<Character> reference)
{
	character = reference;
}

Character::~Character()
{
	cout << "Character Deleted" << endl;
}
