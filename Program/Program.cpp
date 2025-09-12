#include <iostream> // "input output stream"
using namespace std;

class Unit
{
private:
	static int count;
public:
	Unit()
	{
		cout << "Unit Created" << endl;
	}

	~Unit()
	{
		count++;
		cout << "Count: " << count << endl;
	}
};

class Card
{
private:
	char grade;
	const char* name;

public:
	Card() = default;

	Card(Card & clone) // [ ] -> [ ] ->
	{

	}

	void initialize(char grade, const char* name)
	{
		// this: 자기 자신을 가리키는 포인터 변수
		this->name = name;
		this->grade = grade;
	}
};

int Unit::count = 0;

int main()
{
#pragma region 생성자
//클래스의 인스턴스가 생성되는 시점에
//자동으로 호출되는 특수한 멤버 함수입니다.

	//Unit unit;

//생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
//생성자는 반환형이 존재하지 않기 때문에 생성자가 호출되기 전에는
//객체에 대한 메모리가 할당되지 않습니다.

#pragma endregion

#pragma region 소멸자
//객체가 소멸될 때 자동으로 실행되는 클래스의
//멤버 함수입니다.

	//Unit marine;

//소멸자는 객체가 메모리에서 해제될 때 단 한 번만
//호출되며, 소멸자에는 매개 변수를 생성하여 사용할 수 없습니다.

	//Unit* pointer = new Unit;
	//delete pointer;
	//pointer = new Unit;
	//delete pointer;

#pragma endregion

#pragma region 복사 생성자
//같은 객체를 복사하여 생성시킬 때 호출되는
//생성자입니다.

	Card card;
	card.initialize('A', "Diamond");
	Card clone(card);

#pragma endregion

	return 0;
}