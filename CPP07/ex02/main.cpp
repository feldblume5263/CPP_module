#include <iostream>
#include "Array.hpp"

int main(void)
{
	{
		unsigned int		size;
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "empty array test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		size = 0;
		Array<char>					charArr(size);
		std::cout << "  char : " << charArr.size() << std::endl;
		Array<int>					intArr(size);
		std::cout << "   int : " << intArr.size() << std::endl;
		Array<double>				doubleArr(size);
		std::cout << "double : " << doubleArr.size() << std::endl;
		Array<std::string>			stringArr(size);
		std::cout << "string : " << stringArr.size() << std::endl;
	}


	{
		unsigned int			size;
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "specific array test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		size = 10;
		Array<char>				charArr(size);
		std::cout << "  char : " << charArr.size() << std::endl;
		Array<int>				intArr(size);
		std::cout << "   int : " << intArr.size() << std::endl;
		Array<double>			doubleArr(size);
		std::cout << "double : " << doubleArr.size() << std::endl;
		Array<std::string>		stringArr(size);
		std::cout << "string : " << stringArr.size() << std::endl;
	}


	{
		unsigned int			size;
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "operator[] test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		size = 5;
		Array<char>				charArr(size);
		charArr[4] = 65;
		std::cout << "charArr[4] = " << charArr[4] << std::endl;
		Array<int>				intArr(size);
		intArr[4] = 10;
		std::cout << "intArr[4] : " << intArr[4] << std::endl;
		Array<double>			doubleArr(size);
		doubleArr[4] = 42.42;
		std::cout << "doubleArr[4] : " << doubleArr[4] << std::endl;
		Array<std::string>		stringArr(size);
		stringArr[4] = "it is index 4";
		std::cout << "stringArr[4] : " << stringArr[4] << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "out of bound test (size : " << size << ")" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		try // char arr 크기 4인 상태.
		{
			std::cout << charArr[5];
		}
		catch(const std::exception& e)
		{
			std::cout << "charArr[5] Exception : "<< e.what() << '\n';
		}
		try
		{
			std::cout << stringArr[-1];
		}
		catch(const std::exception& e)
		{
			std::cout << "stringArr[-1] Exception : "<< e.what() << '\n';
		}
	}


	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "copy constructor test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		Array<std::string>		arr(2);
		arr[0] = "hello"; // arr[idx] 는 Array가 아닌 string이에요 이걸 실험하고 싶었습니다.
		arr[1] = "world";
		Array<std::string>		test(arr); // 복사 생성자 arr의 '값'이 깊은복사 됨.
		std::cout << " arr[0] : " << arr[0] << std::endl;
		std::cout << "test[0] : " << test[0] << std::endl;
		std::cout << " arr[1] : " << arr[1] << std::endl;
		std::cout << "test[1] : " << test[1] << std::endl;
		std::cout << std::string(60, '-') << std::endl;


		std::cout << "operator= test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		Array<std::string>		good(2);
		good = test; // 할당 연산자.
		std::cout << good[0] << " " << good[1] << std::endl;
	}
	return (0);
}
