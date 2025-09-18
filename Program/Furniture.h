#pragma once
class Furniture
{
protected:
	const char* name;
public:
	virtual void Interact() = 0;
};

