#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include "easyfind.hpp"

int main(void)
{
	{
		std::deque<int>	deque;
		// stack + queue (편리 but 성능 x)
		for (int i = 0; i < 5; i++)
		{
			deque.push_back(i);
		}
		try
		{
			std::deque<int>::iterator found = easyfind(deque, 4);
			std::cout << *found << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::list<int>	list;

		for (int i = 0; i < 5; i++)
		{
			list.push_back(i);
		}
		try
		{
			std::list<int>::iterator found = easyfind(list, 4);
			std::cout << *found << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::set<int>	set; // 이진
		for (int i = 5; i > 0; i--) // 거꾸로도 해볼까?
		{
			set.insert(i);
		}

		try
		{
			std::set<int>::iterator found = easyfind(set, 4);
			std::cout << *found << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::multiset<int>	set; // 중복키
		for (int i = 0; i < 5; i++)
		{
			set.insert(i);
		}

		try
		{
			std::multiset<int>::iterator	found = easyfind(set, 4);
			std::cout << *found << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::vector<int> vec(5, 5);
		for (int i = 0; i < 5; i++)
		{
			vec[i] = i;
		}
		try
		{
			std::vector<int>::iterator	found = easyfind(vec, 4);
			std::cout << *found << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::vector<int> vec(5, 5);
		for (int i = 0; i < 5; i++)
		{
			vec[i] = i;
		}
		try
		{
			std::vector<int>::iterator	found = easyfind(vec, 5);
			std::cout << *found << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	return (0);
}
