#include "Skeleton.h"

#include "stdafx.h"

Skeleton::Skeleton()
{
	name = "Skeleton";
	health = 100;
	attack = 5;
	defense = 1;

	description = "�����̴� �ذ�. \n��°������ ����񿡴� ���� ������ �±װ� �����Ÿ��� �ִ�. \n��� ���� ����� ������ ���� ����� �� ����.";
}

Skeleton::~Skeleton()
{
	cout << "Skeleton deleted" << endl;
}

void Skeleton::Describe()
{
	cout << "�̸�: " << name << endl;
	cout << description << endl;
	cout << endl;
}