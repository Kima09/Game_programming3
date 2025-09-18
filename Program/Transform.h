#pragma once
class Transform
{
private:
	float x;
	float y;
	float z;

public:
	void Rotate(int x);
	void Rotate(float x);
	void Rotate(float x, float y);
};

