#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
// # include <exception>
// # include <cctype>

template<typename T>
class				Array
{
private:
	unsigned int	arrSize;
	T*				element;



public:
	Array();
	Array(unsigned int n); // n크기의 배열
	Array(const Array<T>& other);
	virtual ~Array();
	Array&			operator=(const Array& other);

	T&				operator[](unsigned int index); // 구현에서 예외처리가 반드시 필요
	const T&		operator[](unsigned int index) const;

	class			SegmentFaultException : public std::exception
	{
		const char* what(void) const throw();
	};
	unsigned int	size() const;
};

# include "Array.cpp"
#endif
