#pragma once
class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int x, int y);
	Vector2 & operator + (const Vector2 & clone);

};

