#include "stdafx.h"
#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
	this->x = x;
	this->y = y;
}

const int& Vector2::X()
{
	return x;
}

const int& Vector2::Y()
{
	return y;
}

const Vector2 & Vector2::operator+(const Vector2& clone)
{
	Vector2 vector2(x+clone.x, y+clone.y);
	return vector2;
}

const Vector2& Vector2::operator-(const Vector2& clone)
{
	Vector2 vector2(x - clone.x, y - clone.y);
	return vector2;
}

const Vector2& Vector2::operator*(const Vector2& clone)
{
	Vector2 vector2(x * clone.x, y * clone.y);
	return vector2;
}

const Vector2& Vector2::operator/(const Vector2& clone)
{
	Vector2 vector2(x / clone.x, y / clone.y);
	return vector2;
}

const Vector2& Vector2::operator ++()
{
	++x;
	++y;
	return *this;
}

const Vector2& Vector2::operator --()
{
	--x;
	--y;
	return *this;
}

const Vector2& Vector2::operator ++(int)
{
	Vector2 clone(x, y);
	this->x++;
	this->y++;
	return clone;
}

const Vector2& Vector2::operator --(int)
{
	Vector2 clone(x, y);
	this->x--;
	this->y--;
	return clone;
}
