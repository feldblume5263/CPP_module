#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

// 스택은 컨테이너 어댑터 개념으로 그자체로 반복자 사용x
// 상속 개념이 아닌 클래스 멤버 변수에 추가. 무조건 list 기반이 아니라, 내가 시용할 함수를 선택할 수 있다.
template<typename T>
class					MutantStack : public std::stack<T>
{
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack<T>& other);
	MutantStack&			operator=(const MutantStack<T>& other);

	// 반복자를 직접 정의하여 사용하기
	typedef typename std::stack<T>::container_type::iterator			iterator;
	                                    // deque
	typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator		const_iterator;

	iterator begin()
	{
		return (this->std::stack<T>::c.begin());
	}

	iterator end()
	{
		return (this->std::stack<T>::c.end());
	}

	reverse_iterator rbegin()
	{
		return (this->std::stack<T>::c.rbegin());
	}

	reverse_iterator rend()
	{
		return (this->std::stack<T>::c.rend());
	}

	const_iterator begin() const
	{
		return (this->std::stack<T>::c.begin());
	}

	const_iterator end() const
	{
		return (this->std::stack<T>::c.end());
	}

};

#include "mutantStack.cpp"
#endif

// const에 대해... 부가 설명

//		typedef typename std::stack<T>::container_type::const_iterator		const_iterator;
//		typedef typename const std::stack<T>::container_type::iterator		iterator;
// 이 두개는 다르다.
// 아래는 ++it가 안되기 때문에 자주 사용하지 않는다. (값을 바꿀 수 없다.)
// 위는 Const 멤버 함수에서 STL 멤버 변수를 다룰 때 사용된다.
