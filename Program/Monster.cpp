#include "Monster.h"

#include <iostream> 
using namespace std;

void Monster::Stat()
{
	cout << "체력: " << health << endl;
	cout << "공격력: " << attack << endl;
	cout << "방어력: " << defense << endl;
}
