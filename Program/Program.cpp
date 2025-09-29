#include "stdafx.h"
#include <vector>
#include <list>

int main()
{
#pragma region 선형 컨테이너
//데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 컨테이너입니다.

#pragma region vector container

	//vector<int> vector; //템플릿. <형태> 변수명.
	////동적 배열이므로 인덱스 접근 가능하다.
	//
	//vector.reserve(8);//용량을 미리 확보하는 함수
	//
	//vector.push_back(10);
	//cout<<vector.capacity()<<" "; //사이즈 반환 함수
	//vector.push_back(20);
	//cout << vector.capacity() << " ";
	//vector.push_back(30);
	//cout << vector.capacity() << " ";
	//vector.push_back(40);
	//cout << vector.capacity() << " ";
	//vector.push_back(50); //데이터를 삽입하는 함수
	//cout << vector.capacity() << " ";
	//
	//vector.pop_back(); //마지막 원소를 삭제한다. 출력하는 함수는 아니다.
	//
	//for (int i = 0;i < vector.size();i++)
	//{
	//	cout << vector[i] << " ";
	//}
	//
	//vector.clear();
	//cout << "vector의 size값: " << vector.size() << endl;
	//cout << "vector의 capacity값: " << vector.capacity() << endl;
//0, 8이 출력된다.

//capacity의 결과 1, 2, 3, 4, 6이 출력된다.
//capacity는 VS의 경우 약 1.5배씩 증가하기 때문이다. 이는 프로그램마다 다를 수 있다.

#pragma endregion

#pragma region list container

	std::list<int> list;

	list.push_back(20);
	list.push_back(30);

	list.push_front(10);

	list.pop_front();

	list.push_front(1);

	list.remove(20);

	//for(const자료형 변수명 데이터컨테이너)

#pragma endregion


#pragma endregion


	return 0;
}