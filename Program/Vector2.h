#pragma once
class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int x, int y);

	const int& X();
	const int& Y();

	const Vector2 & operator + (const Vector2 & clone);
	const Vector2& operator - (const Vector2& clone);
	const Vector2& operator * (const Vector2& clone);
	const Vector2& operator / (const Vector2& clone);

	const Vector2& operator ++();
	const Vector2& operator --();
//후위

	const Vector2& operator ++(int);
	const Vector2& operator --(int);
//전위
};

