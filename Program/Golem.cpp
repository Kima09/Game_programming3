#include "Golem.h"

#include "stdafx.h"

Golem::Golem()
{
	name = "Golem";
	health = 250;
	attack = 10;
	defense = 5;

	description = "마법사와 마녀들이 창조한 후 허구한 날 유기하는 마법 생명체. \n마법사가 되려면 책임감을 어머니 자궁에 두고 태어나야 하는 걸까?";
}

Golem::~Golem()
{
	cout << "Golem deleted" << endl;
}

void Golem::Describe()
{
	cout << "이름: " << name << endl;
	cout << description << endl;
	cout << endl;
}