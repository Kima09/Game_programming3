#include "Monster.h"

#include "stdafx.h"

Monster::~Monster()
{
	cout << "Monster deleted" << endl;
}

void Monster::Stat()
{
	cout << "이름: " << name << endl;
	cout << "체력: " << health << endl;
	cout << "공격력: " << attack << endl;
	cout << "방어력: " << defense << endl;
	cout << endl;
}

void Monster::Describe()
{
	cout << "몬스터 묘사" << endl;
}
