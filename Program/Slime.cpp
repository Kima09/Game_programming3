#include "Slime.h"

#include <iostream> 
using namespace std;

Slime::Slime()
{
	name = "Slime";
	health = 50;
	attack = 1;
	defense = 1;

	description = "판타지 장르에 항상 출연하는 덕분에 실직이라는 개념을 이해하지 못한다. \n다른 종족 실직자에게 빡침과 증오를 유발하는 행동 탓에 자주 짓이겨지지만, 하루면 완전히 부활한다.";
}

void Slime::Describe()
{
	cout << "이름: " << name << endl;
	cout << description << endl;
	cout << endl;
}