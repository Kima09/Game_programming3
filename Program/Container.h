#pragma once

template <typename T>
class Container
{
private:
	int index;
	int size;

	T* list;
public:
	void Push(T data);
	Container(int allocateSize);
	~Container();
	const T& operator[](const int index);
	inline int Index() const;
};
