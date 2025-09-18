#include "Golem.h"

#include "stdafx.h"

Golem::Golem()
{
	name = "Golem";
	health = 250;
	attack = 10;
	defense = 5;

	description = "������� ������� â���� �� �㱸�� �� �����ϴ� ���� ����ü. \n�����簡 �Ƿ��� å�Ӱ��� ��Ӵ� �ڱÿ� �ΰ� �¾�� �ϴ� �ɱ�?";
}

Golem::~Golem()
{
	cout << "Golem deleted" << endl;
}

void Golem::Describe()
{
	cout << "�̸�: " << name << endl;
	cout << description << endl;
	cout << endl;
}