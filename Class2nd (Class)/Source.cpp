#include <iostream> // "input output stream"
using namespace std;

namespace Colombia
{
	float area = 45789.2f;
	void size()
	{
		cout << "area: " << area << "km" << endl;
	}
}

namespace Brazil
{
	float area = 57861.5f;
	void size()
	{
		cout << "area: " << area << "km" << endl;
	}
}

class GameObject
{
#pragma region 접근 지정자
	//클래스 내부에 포함되어 있는 속성에 접근 범위를
	//제한하는 지정자입니다.

	//public: 클래스 내부와 자기가 상속하고 있는 클래스 그리고
	//			클래스 외부에서도 접근을 허용하는 지정자입니다.

	//protected: 클래스 내부와 자신이 상속하고 있는 클래스까지만
	//				접근을 허용하는 지정자입니다.

	//private: 클래스 내부까지만 접근을 허용하는 지정자입니다.

#pragma endregion

private:
	int x = 1;
	int y = 1;
	double z = 1;
	// 바이트를 아끼기 위해 큰 자료형은 아래로 배치합니다.

protected:
	const char* name;
public:
	void Position()
	{
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		cout << "z: " << z << endl;
	}
};

void Profile(const char* name = "James", int age = 20)
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

using namespace Brazil;

int main()
{
#pragma region 이름 공간
	//속성을 구분할 수 있도록
	//유효 범위를 설정하는 영역입니다.

		//size();
		//Colombia::size();

	//int main() 위에 using namespace Brazil; 를 추가할 경우
	//size(); 만 메인 함수에 적어주면 자동으로 Brazil namespace의
	//size(); 를 호출합니다.

	//같은 원리로 최상단에 using namespace std;를 추가할 경우
	//본문에 std::를 생략할 수 있습니다.

#pragma endregion

#pragma region 클래스
//사용자 정의 데이터 유형으로 속성과 함수가 포함되어 있으며
//클래스를 통해 객체를 생성하여 접근하고 사용하는
//집합체입니다.
// 
	//GameObject gameObject;
	//gameObject.Position();

//클래스의 경우, 클래스 내부에 있는 변수는
//클래스의 메모리 영역에 포함되지만,
//정적 변수와 함수의 메모리는
//클래스 영역에 포함되지 않습니다.

	//cout << "GameObject의 크기: " << sizeof(GameObject) << endl;

//결과 24. int * 2 = 8, double = 8, pointer = 8
#pragma endregion

#pragma region 기본 매개 변수
//함수의 매개 변수에 값이 전달되지 않을 때
//미리 값을 설정해두는 매개 변수입니다.

	//Profile();
	//Profile("John", 24);

//기본 매개 변수를 지정하려면
//오른쪽에서부터 값을 지정해주어야 합니다.

#pragma endregion


	return 0;
}