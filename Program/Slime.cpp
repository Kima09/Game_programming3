#include "Slime.h"

#include "stdafx.h"

Slime::Slime()
{
	name = "Slime";
	health = 50;
	attack = 1;
	defense = 1;

	description = "��Ÿ�� �帣�� �׻� �⿬�ϴ� ���п� �����̶�� ������ �������� ���Ѵ�. \n�ٸ� ���� �����ڿ��� ��ħ�� ������ �����ϴ� �ൿ ſ�� ���� ���̰�������, �Ϸ�� ������ ��Ȱ�Ѵ�.";
}

Slime::~Slime()
{
	cout << "Slime deleted" << endl;
}

void Slime::Describe()
{
	cout << "�̸�: " << name << endl;
	cout << description << endl;
	cout << endl;
}