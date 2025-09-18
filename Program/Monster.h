#pragma once
class Monster
{
protected:
	int health;
	int attack;
	int defense;

	const char* name;

	const char* description;

public:
	virtual ~Monster();

	void Stat();

	virtual void Describe();
};

