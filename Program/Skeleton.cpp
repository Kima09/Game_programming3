#include "Skeleton.h"

#include <iostream> 
using namespace std;

Skeleton::Skeleton()
{
	name = "Skeleton";
	health = 100;
	attack = 5;
	defense = 1;

	description = "�����̴� �ذ�. \n��°������ ����񿡴� ���� ������ �±װ� �����Ÿ��� �ִ�. \n��� ���� ����� ������ ���� ����� �� ����.";
}

void Skeleton::Describe()
{
	cout << "�̸�: " << name << endl;
	cout << description << endl;
	cout << endl;
}