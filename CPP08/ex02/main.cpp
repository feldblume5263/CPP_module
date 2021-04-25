#include "mutantStack.hpp"

int main()
{
	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "iterator test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		mstack.push(-3298);
		mstack.push(32222);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		std::cout << "Is this real iterator?" << std::endl;
		++it;
		--it;
		std::cout << "yes!" << std::endl;

		std::cout << "----- print all -----" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "reverse iterator test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		MutantStack<int>	mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();


		std::cout << mstack.size() << std::endl;
		std::cout << std::endl;


		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		mstack.push(-3298);
		mstack.push(32222);
		MutantStack<int>::reverse_iterator	rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator	rite = mstack.rend();

		std::cout << "Is this real reverse_iterator?" << std::endl;
		++rit;
		--rit;
		std::cout << "yes!" << std::endl;

		std::cout << "----- print all -----" << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
		std::stack<int> s(mstack);
	}
	return (0);
}
