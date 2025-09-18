#include "Transform.h"

#include "stdafx.h"

void Transform::Rotate(int x)
{
	this->x = x;
	cout << "x" << this->x << endl;
}

void Transform::Rotate(float x)
{
	this->x = x;
	cout << "x" << this->x << endl;
}

void Transform::Rotate(float x, float y)
{
	this->x = x;
	this->y = y;

	cout << "x" << this->x << endl;
	cout << "y" << this->y << endl;
}
