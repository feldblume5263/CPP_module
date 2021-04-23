# include "span.hpp"

span::span(): size(0), largest(0), smallest(0), start(false)
{

}

span::span(unsigned int n) : size(n), largest(0), smallest(0), start(false)
{

}

span::~span()
{

}

span::span(const span& other)
{
	*this = other;
}

span&			span::operator=(const span& other)
{
	size = other.size;
	list = other.list;
	largest = other.largest;
	smallest = other.smallest;
	start = other.start;
	return (*this);
}

const std::list<int>&		span::getList() const
{
	return (list);
}


void			span::addNumber(int value)
{
	int			listSize;

	listSize = this->list.size();
	if (listSize >= this->size)
	{
		throw span::MaxSizeException();
	}
	else
	{
		if (this->start == false)
		{
			this->start = true;
			this->largest = value;
			this->smallest = value;
		}
		else
		{
			if (value > this->largest)
				this->largest = value;
			else if (value < this->smallest)
				this->smallest = value;
		}
		(this->list).push_back(value);
	}
}

unsigned int		span::longestSpan() const
{
	if (list.size() < 2)
		throw span::MaxSizeException();
	return ((this->largest) - (this->smallest));
	// 동적 프로그래밍으로 효율성은 위가 훨씬 뛰어나다.

	// 다른 방법 (대부분의 사람들이 이 방법으로 했음.
	// 이 방법은 sort 함수를 반드시 실행 해야만 하므로 상대적으로 비효율적이다.)
	//시간 복잡도 무조건 O(n) 이상임...


	// std::list<int>  tmp(list);

	// tmp.sort();
	// return (*(--tmp.end()) - *tmp.begin());
}




// list 반복문 예시
//     list<int> li; //리스트 선언
//     list<int>::iterator it; //반복자 선언

//     for(int i = 0;i < 10;i++){
//         li.push_back(i); //뒤쪽으로 원소를 0부터 9까지 넣음
//     }

//     for(it = li.begin();it != li.end();it++){
//  //it이 li.begin()을 가리킴, it이 li.end()를 가리키지 않을때까지 반복, it가 다음것을 가리킴
//         printf("%d ",*it); //원소 접근은 *it을 이용
//
// 반복자는 결국 리스트에 접근하게 해주는 역할을 한다.
unsigned int		span::shortestSpan() const
{
	if (list.size() < 2)
	{
		throw MinSizeException();
	}

	std::list<int>		tmp(list);
	unsigned int		dif;

	tmp.sort();
	unsigned int		shortest = -1;

// <2>
	for (std::list<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
	{
		std::list<int>::iterator next = it;
		next++;

		dif = *next - *it;
		if (dif < shortest)
			shortest = dif;
	}
	return (shortest);
}

const char*								span::MaxSizeException::what(void) const throw()
{
	return ("Max size exception");
}

const char*								span::MinSizeException::what(void) const throw()
{
	return ("Min size exception");
}
