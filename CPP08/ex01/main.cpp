#include "span.hpp"
#include <iostream>

#include <vector>

int main(void)
{
	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "서브젝트에 명시된 테스트, 한개씩 넣어본다." << std::endl;
		span sp = span(5);
		sp.addNumber(8);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "조금 더 복잡한 테스트." << std::endl;
		span sp = span(50);
		sp.addNumber(6);
		sp.addNumber(20);
		sp.addNumber(45);
		sp.addNumber(523);
		sp.addNumber(1142);
		sp.addNumber(42);
		sp.addNumber(122);
		sp.addNumber(17);
		sp.addNumber(142);
		sp.addNumber(128);
		sp.addNumber(1738);
		sp.addNumber(3);
		sp.addNumber(123);
		sp.addNumber(24);
		sp.addNumber(11);
		sp.addNumber(5);
		sp.addNumber(-2983);
		sp.addNumber(80);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "들어오는 값이 전체 배열 사이즈를 넘어갈 때" << std::endl;
			span sp = span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(11);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "사이값을 구하기에 숫자가 부족할 때, (2보다 작을 때)" << std::endl;
			span sp = span(5);
			sp.addNumber(5);
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "Add number test" << std::endl;
			span sp = span(10001);
			std::vector<int> vec(10001, 0);
			// addNumber 오버로딩
			sp.addNumber(vec.begin(), vec.end());
			std::cout << "start : " << *(sp.getList().begin()) << std::endl;
			std::cout << "end : " << *(sp.getList().end()) << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "Add number exception test" << std::endl;
			span sp = span(10001);
			std::vector<int> vec(10002, 0);
			std::cout << "end : " << *(sp.getList().end()) << std::endl;
			sp.addNumber(vec.begin(), vec.end());
			std::cout << "end : " << *(sp.getList().end()) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	return (0);
}
