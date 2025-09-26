#pragma once
class Character
{
private:
	weak_ptr<Character> character;
public:
	Character();
	void Partner(weak_ptr<Character> reference);
	//(const weak_ptr<Character> &reference);
	//const와 &으로 복사 비용이 줄어듭니다.
	~Character();
};

