#pragma once
class Character
{
private:
	weak_ptr<Character> character;
public:
	Character();
	void Partner(weak_ptr<Character> reference);
	//(const weak_ptr<Character> &reference);
	//const�� &���� ���� ����� �پ��ϴ�.
	~Character();
};

