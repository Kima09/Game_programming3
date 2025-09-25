#include "stdafx.h"
#include "Material.h"
#include "Resource.h"

int main()
{
#pragma region 스마트 포인터
	//포인터를 사용하는 동시에 자동으로 메모리 관리를 해주며,
	//경계 확인과 같은 추가 기능을 제공하는 포인터입니다.
	
//간편하지만 일반 포인터보다 약간 무겁습니다.

	//int* ptr2 = nullptr;
	//
	//{
	//	int* ptr1 = new int;
	//
	//	*ptr1 = 100;
	//
	//	ptr2 = ptr1;
	//}
	////ptr1은 외부이기에 접근할 수 없습니다.
	//cout << *ptr2 << endl;

#pragma region unique pointer
//특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록
//되어 있는 포인터입니다.
	//unique_ptr <자료형> 변수명 

	//unique_ptr<Material> pointer = make_unique<Material>();
//delete[] 없이도 삭제됩니다.
//unique_ptr 또한 하나의 클래스입니다.

	////unique_ptr<Material> reference = pointer;
//유니크 포인터이므로 해당 코드는 작동하지 않습니다.

	//unique_ptr<Material> reference = std::move(pointer);
//std::move를 통해 메모리 소유권을 이전할 수 있습니다.
//소유권을 잃은 pointer의 경우 empty 상태가 됩니다.
#pragma endregion

#pragma region shared pointer
//하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
//모든 포인터 객체가 자원 객체를 필요로 하지 않을 때
//자원 객체를 해제하도록 설계되어 있는 포인터입니다.

	//shared_ptr<자료형> 변수명

	shared_ptr<Resource> texture = make_shared<Resource>();

	cout << "Reference Count: " << texture.use_count() << endl;

	shared_ptr<Resource> sprite = texture;

	cout << "Reference Count: " << texture.use_count()<<endl;
	//sprite.use_count() 로 작성해도 작동합니다.
	
#pragma endregion
	

#pragma endregion



	return 0;
}