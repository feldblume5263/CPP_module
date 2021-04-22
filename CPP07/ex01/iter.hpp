//함수템플릿 iter를 쓸 것 3개의 인자를 받고 아무것도 반환하지 않음.
//첫번째 인자는 배열의 포인터,
//두 번째 인자는 배열의 길이,
//세 번째 인자는 배열의 각 요소에 적용할 함수.

#include <iostream>

// void 반환 함수를 매개변수로 사용!
// void (*f)(T& element) <- 매개변수로 들어오는 함수가 가지는 매개변수는 하나다.
// 어떤 array가 들어오던지 작동해야 함. 다만 length는 size_t로
// 엄청 강력한 기능인듯...


// while (idx < length)
// {
// 	function(arr[idx]);
// 	idx++;
// }

template<typename T>
void			iter(T* arr, std::size_t length, void (*f)(T& element))
{
	std::size_t	idx;

	idx = 0;
	while (idx < length)
	{
		(*f)(arr[idx]); // 함수의 인자가 arr이다. template으로 뒀기 때문에 들어오는게 가능
		idx++;
	}
	//리턴값 없음
}

// 역시 const로.... 상수가 들어오는 경우 // 이게 없으면 main 테스트 마지막부분에서 당연히 문제생김.
template<typename T>
void			iter(T* arr, std::size_t length, void (*f)(const T& element))
{
	std::size_t	idx;

	idx = 0;
	while (idx < length)
	{
		(*f)(arr[idx]); // 함수의 인자가 arr이다. template T로 뒀기 때문에 들어오는게 가능
		idx++;
	}
	//리턴값 없음
}

template<typename T>
void			print(const T& ret)
{
	std::cout << ret << " ";
}



// BONUS = 매개변수가 5보다 작은지를 확인하는 간단한 템플릿 함수. double, float, int 가 들어온다.
template<typename T>
void			is5x(const T& val)
{
	if (val < 5)
		std::cout << val <<" is smaller than 5" << std::endl;
}
