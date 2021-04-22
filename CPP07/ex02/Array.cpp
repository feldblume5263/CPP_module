#ifndef ARRAY_CPP // 템플릿은 상호참조..!
# define ARRAY_CPP

#include "Array.hpp"
#include <iostream>
// 클래스 템플릿으로부터 객체를 생성할 때에는 꺾쇠괄호(<>) 안에
// 템플릿에 전달된 인수 타입을 명시해야 한다.
template<typename T>
const char*				Array<T>::SegmentFaultException::what(void) const throw()
{
	return ("input index is larger than exist index or is smaller than 0");
}

template<typename T>
unsigned int			Array<T>::size() const
{
	return (arrSize);
}

template<typename T>
Array<T>::~Array()
{
	delete[] element;
}




template<typename T>
Array<T>::Array() : arrSize(0), element(new T[0])
{

}

template<typename T>
Array<T>::Array(unsigned int n) : arrSize(n), element(new T[n])
{
}

template<typename T>
Array<T>::Array(const Array<T>& other) : arrSize(0), element(new T[0])
{
	*this = other;
}





// deep
template<typename T>
Array<T>&				Array<T>::operator=(const Array& other)
{
	if (this == &other)
		return (*this);
	arrSize = other.arrSize;
	delete[] element; // 반드시 기존 할당된 부분을 삭제해주어야 함.
	element = new T[arrSize]; // free하고 다시 할당 안해주니까 중복 free오류.... 마치 생성자에 문제가 있는것처럼 보인다

	unsigned int idx;

	idx = 0;
	while (idx < arrSize)
	{
		element[idx] = other.element[idx];
		idx++;
	}
	return (*this);
}


template<typename T>
T&						Array<T>::operator[](unsigned int index)
{
	if (index >= arrSize)
		throw			SegmentFaultException();
	else
		return (element[index]);
}


// 멤버 변수는 const로 쓰는게 좋다.
// 만약 포인터나 레퍼런스로 반환을 하면 그 주소를 알게 될 경우 역으로 그 값에 접근 당할 수 있기 때문이다. 혹은 중간에 변경될 수도 있다.
template<typename T>
const T&				Array<T>::operator[](unsigned int index) const
{
	if (index >= arrSize)
		throw			SegmentFaultException();
	else
		return (element[index]);
}

#endif
