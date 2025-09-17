#include "Skeleton.h"

#include <iostream> 
using namespace std;

Skeleton::Skeleton()
{
	name = "Skeleton";
	health = 100;
	attack = 5;
	defense = 1;

	description = "움직이는 해골. \n어째서인지 대퇴골에는 유명 곰탕집 태그가 덜렁거리고 있다. \n사람 뼈로 우려낸 국물이 맛의 비결인 것 같다.";
}

void Skeleton::Describe()
{
	cout << "이름: " << name << endl;
	cout << description << endl;
	cout << endl;
}