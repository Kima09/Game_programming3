
#include "../Program/Slime.h"
#include "../Program/Skeleton.h"
#include "../Program/Golem.h"

#include "../Program/Transform.h"

#include "../Program/stdafx.h"

int main()
{
#pragma region 다형성
	//여러 개의 서로 다른 객체가 동일한 기능을
	//서로 다른 방법으로 처리할 수 있는 기능입니다.

		//Slime * slime = new Slime();
		//Skeleton skeleton;
		//Golem golem;
		//각 객체를 스택에 생성했습니다.

		//slime.Stat();
		//skeleton->Stat();
		//golem.Stat();

		//skeleton.Describe();
		//slime->Describe();
		//golem.Describe();

#pragma region 가상 함수
//실행 시간에 상위 클래스에 대한 참조로
//하위 클래스에 재정의된 함수를 호출하는 함수입니다.
	//Monster* pointer = nullptr;
	//
	//int input = 0;
	//
	//while (true)
	//{
	//	cin >> input;
	//
	//	switch (input)
	//	{
	//	case 0: pointer = new Slime;
	//		break;
	//	case 1: pointer = new Skeleton;
	//		break;
	//	case 2: pointer = new Golem;
	//		break;
	//	default: std::cout << "Exception" << endl;
	//		continue;
	//	}
	//
	//	//가상 함수는 한 개 이상의 가상 함수를 포함하는
	//	//클래스가 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.
	//
	//	pointer->Describe();
	//
	//	delete pointer;
	//
	//	break;
	//
	//}
	//Monster 헤더에 Public: void Describe(); 으로 작성되어 있는 경우
	//상위 클래스인 Monster의 Describe 함수가 호출되어
	//하위 클래스의 묘사가 아닌, 몬스터 묘사 라는 문장만 출력됩니다.

	//상위 헤더에서 Public: virtual void Describe(); 로 수정하면
	//하위 클래스의 함수가 정상적으로 출력됩니다.

	//하위 헤더의 가상 함수 코드 또한 virtual void Describe() override;로 수정합니다.
	//메모리 누수 방지를 위해 각 클래스의 소멸자에도 virtual 과 override를 추가합니다.

//가상 함수의 경우 함수 테이블을 사용하여 호출되는
//함수를 실행 시간에 결정하며, 정적으로 선언된 함수는
//가상 함수로 선언할 수 없습니다.

#pragma endregion

#pragma region 오버로딩
//같은 이름의 함수를 매개 변수의 자료형과 매개 변수의
//수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

	//Transform transform;
	//
	//transform.Rotate(10);
	//transform.Rotate(12.5f);
	//transform.Rotate(15.25f, 17.825f);

//함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의
//형태를 보고 호출하므로, 반환형으로 함수의 오버로딩을 생성할 수 없습니다.

#pragma endregion


	//다형성은 컴파일 시점에 함수와 속성이 결정되는
	//정적 바인딩을 하지 않고, 실행 시간에
	//함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.

#pragma endregion




	return 0;
}