#include "Golem.h"

#include <iostream> 
using namespace std;

Golem::Golem()
{
	name = "Golem";
	health = 250;
	attack = 10;
	defense = 5;

	description = "������� ������� â���� �� �㱸�� �� �����ϴ� ���� ����ü. \n�����簡 �Ƿ��� å�Ӱ��� ��Ӵ� �ڱÿ� �ΰ� �¾�� �ϴ� �ɱ�?";
}

void Golem::Describe()
{
	cout << "�̸�: " << name << endl;
	cout << description << endl;
	cout << endl;
}