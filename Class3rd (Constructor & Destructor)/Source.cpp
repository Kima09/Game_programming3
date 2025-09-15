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

	Card(const Card& clone) // [ ] -> [ ] ->
	{
		grade = clone.grade;
		name = clone.name;
	}

	void initialize(char grade, const char* name)
	{
		// this: 자기 자신을 가리키는 포인터 변수
		this->name = name;
		this->grade = grade;
	}
};

class Packet
{
private:
	int* bit = nullptr; //널과 같은 초기화 문법입니다.
public:
	Packet(int value)
	{
		if (bit == nullptr)
		{
			bit = new int;
		}
		*bit = value;
	}
	Packet(const Packet& clone)
	{
		bit = new int;
		*bit = *clone.bit;
	}

	~Packet()
	{
		delete bit;
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

	//Card card;
	//card.initialize('A', "Diamond");
	//Card clone(card);

//데이터 값 복사 시 주로 사용
#pragma endregion

#pragma region 얕은 복사
//객체를 복사할 때 주소 값을 복사하여 같은
//메모리 공간을 가리키게 하는 복사입니다.

	//int* pointer = new int;
	//int* reference = pointer;
	//
	//*pointer = 10;
	//
	//cout << "pointer의 값: " << pointer << endl;
	//cout << "reference의 값: " << reference << endl;
	//
	//cout << "pointer가 가리키는 값: " << *pointer << endl;
	//cout << "reference가 가리키는 값: " << *reference << endl;
	//
	//delete pointer;
//new int가 생성된 것은 pointer 이므로 하나만 delete 해주어도 누수가 없습니다.
//reference를 delete 시도하면 오류가 발생합니다.

//얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
//참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
//서로 참조된 객체도 함께 영향을 받습니다.
#pragma endregion

#pragma region 깊은 복사
//객체를 복사할 때, 참조 값이 아닌 객체 자체로
//새로 복사하여 서로 다른 메모리를 생성하는 복사입니다.

	//Packet packet(10);
	//
	//Packet protocol(packet);

#pragma endregion


	return 0;
}