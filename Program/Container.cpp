#include "stdafx.h"
#include "Container.h"

template<typename T>
inline void Container<T>::Push(T data)
{
	if (index >= size)
	{
		cout << "Index Out of Range" << endl;
		return;
	}
	list[index++] = data
}

template<typename T>
inline Container<T>::Container(int allocateSize)
{
	size = allocateSize;
	index = 0;
	list = new T[allocateSize];
}

template<typename T>
inline Container<T>::~Container()
{
	delete[] list;
}

template<typename T>
inline const T& Container<T>::operator[](const int index)
{
	return list[index];
}

template<typename T>
inline int Container<T>::Index() const
{
	return index;
}

template class Container<bool>;
template class Container<char>;
template class Container<int>;
template class Container<float>;
template class Container<double>;
template class Container<const char *>;