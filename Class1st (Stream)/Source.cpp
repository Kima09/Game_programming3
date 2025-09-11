#include <iostream> // "input output stream"

int packet = 1; // 전역 변수

void swap(int& x, int& y)
{
    int temporary = x;
    x = y;
    y = temporary;
}

int main()
{
    // << 삽입 연산자
    // >> 추출 연산자
#pragma region 스트림
// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

    //int count = 0;
    //
    //std::cout << "Series: ";
    //
    //std::cin >> count;
    //
    //for (int i = 1;i <= count;i++)
    //{
    //    std::cout << "Play Station " << i << std::endl;
    //}

// 스트림은 운영 체제에 의해 생성되며, 스트림 자체에
// 버퍼라는 임시 메모리 공간이 존재합니다.
#pragma endregion

#pragma region 범위 지정 연산자
//여러 범위에서 사용되는 식별자를 구분하는데
//사용하는 연산자입니다.

    //int packet = 100; //지역 변수

    //std::cout << "packet 지역 변수의 값: " << packet << std::endl;

    //범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가
    //선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을
    //사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않습니다.

    //std::cout << "packet 전역 변수의 값: " << ::packet << std::endl;

    //::packet의 경우 전역 변수를 호출한다.
#pragma endregion

#pragma region 참조자
//하나의 변수에 또 다른 이름을 지정하는 지정자입니다.
    //int x = 10;
    //int& referenceX = x;
//8바이트짜리 저장공간에 x/referenceX 두 이름으로 저장
    //int x = 10;
    //int y = 20;
    //
    //std::cout << "변경 전: x = " << x << ", y = " << y << std::endl;
    //swap(x, y);
    //std::cout << "변경 후: x = " << x << ", y = " << y << std::endl;


#pragma endregion

#pragma region 동적 할당
    int* pointer = new int;
    *pointer = 10;
    std::cout << "pointer 변수가 가리키는 값: " << *pointer << std::endl;
    delete pointer;
    pointer = new int[5];

    for (int i = 0; i < 5;i++)
    {
        pointer[i] = (i + 1) * 10;
        std::cout << pointer[i] << std::endl;
    }

    //delete pointer;
    // delete pointer의 경우 메모리 누수가 발생합니다.

    delete[] pointer;
#pragma endregion
    return 0;
}