#include "Slime.h"

#include <iostream> 
using namespace std;

Slime::Slime()
{
	name = "Slime";
	health = 50;
	attack = 1;
	defense = 1;

	description = "��Ÿ�� �帣�� �׻� �⿬�ϴ� ���п� �����̶�� ������ �������� ���Ѵ�. \n�ٸ� ���� �����ڿ��� ��ħ�� ������ �����ϴ� �ൿ ſ�� ���� ���̰�������, �Ϸ�� ������ ��Ȱ�Ѵ�.";
}

void Slime::Describe()
{
	cout << "�̸�: " << name << endl;
	cout << description << endl;
	cout << endl;
}