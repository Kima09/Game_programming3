#pragma once
class Furniture
{
protected:
	const char* name;
public:
	Furniture();
	virtual void Interact() = 0;
	virtual ~Furniture();
};

