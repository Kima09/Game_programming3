#include "Monster.h"

#include <iostream> 
using namespace std;

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
