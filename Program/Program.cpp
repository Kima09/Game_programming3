#include "stdafx.h"
#include <set>
#include <unordered_set>
#include <unordered_map>

int main()
{
#pragma region 연관 컨테이너
//특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region unordered_set
	//std::unordered_set<const char*> unordered_set;
	//
	////배열 크기의 배수로 리저브 하는 편이 좋다.
	////unordered_set.reserve(16);
	////unordered_set.max_load_factor(2.0);
	////max load factor를 수동으로 설정할 수 있다. 리해시 함수가 호출되지 않는다.
	//
	//unordered_set.insert("blade");
	//unordered_set.insert("shield");
	//unordered_set.insert("gage");
	//unordered_set.insert("heart");
	//unordered_set.insert("omen");
	//unordered_set.insert("reaver");
	//
	//cout << "Load Factor: " << unordered_set.load_factor() << endl;
	//cout << "Bucket Count: " << unordered_set.bucket_count() << endl;
	////버켓 속 로드의 개수는 6, 전체 크기는 8.
	////로드 팩터는 6/8=0.75
	////버켓 카운트는 8
	//
	////로드 팩터는 버킷 하나당 몇 개의 원소가 있는지 나타낸다.
	////로드 팩터가 0.5 이하라면 메모리 효율이 낮다고 볼 수 있다.
	////0.5 초과, 1이하라면 적당한 수준으로 볼 수 있다.
	////로드 팩터를 낮추면 메모리 사용량이 증가하는 대신 탐색 성능이 향상된다.
	////높이면 메모리 사용량이 절약되는 대신 탐색 성능이 저하된다.
	//
	//unordered_set.insert("vow");
	//unordered_set.insert("torment");
	//unordered_set.insert("ring");
	//cout << "Load Factor: " << unordered_set.load_factor() << endl;
	//cout << "Bucket Count: " << unordered_set.bucket_count() << endl;
//총 9개를 넣자 버켓 카운터가 64로 급상승한다.
//로드 팩터가 1을 넘는 순간 내부적으로 rehash() 함수가 호출되기 때문이다.

//연관 컨테이너는 정렬이 이루어지지 않으며,
//같은 이름의 키를 중복 삽입할 수 없다.

	//if (unordered_set.find("shield") != unordered_set.end())
	//{
	//	cout << "data exists." << endl;
	//}
	//else
	//{
	//	cout << "data does not exist." << endl;
	//}
	//
	//unordered_set.erase("vow");
	//for (const char* element : unordered_set)
	//{
	//	cout << element << endl;
	//}
#pragma endregion

#pragma region unordered_map

	//unordered_map<std::string, int> unordered_map;
	//
	//unordered_map["Potion"] = 2;
	//unordered_map["Elixir"] = 1;
	//unordered_map["Antidote"] = 2;
	//unordered_map["Oil"] = 3;
	//
	//string item_name;
	//std::cin >> item_name;
	//if (unordered_map[item_name] > 0 && unordered_map.find(item_name) != unordered_map.end())
	//{
	//	unordered_map[item_name]--;
	//	cout << item_name << " used" << endl;
	//	if (unordered_map[item_name] <= 0)
	//	{
	//		unordered_map.erase(item_name);
	//		cout << item_name << " depleted" << endl;
	//	}
	//}
	//else
	//{
	//	cout << item_name << " doesn't exist" << endl;
	//}
	//
	//for (const auto element : unordered_map)
	//{
	//	cout << "Name: " << element.first << " quantity: " << element.second << endl;
	//}
#pragma endregion

#pragma region set

#pragma endregion


#pragma endregion



	return 0;
}