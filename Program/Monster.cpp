#include "Monster.h"

#include "stdafx.h"

Monster::~Monster()
{
	cout << "Monster deleted" << endl;
}

void Monster::Stat()
{
	cout << "�̸�: " << name << endl;
	cout << "ü��: " << health << endl;
	cout << "���ݷ�: " << attack << endl;
	cout << "����: " << defense << endl;
	cout << endl;
}

void Monster::Describe()
{
	cout << "���� ����" << endl;
}
