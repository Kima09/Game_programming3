#include "Consumable.h"

//아래 두 줄은 .h 대신 .cpp 파일에 작성하는 것을 권장합니다.
#include <iostream> 
using namespace std;


Consumable::Consumable()
{
	cout << "Consumable Created" << endl;
}

Consumable::~Consumable()
{
	cout << "Consumable Destroyed" << endl;
}
