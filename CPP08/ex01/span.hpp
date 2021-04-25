#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>
# include <iostream>
# include <ctime>

class			span
{
private:
	std::list<int>		list;
	unsigned int		size;

	// longest를 구하는 동적프로그래밍을 위한 선언
	int					largest;
	int					smallest;
	bool				start;


public:
	span();
	span(unsigned int n);
	span(const span& other);
	~span();

	span&					operator=(const span& other);

	void					addNumber(int number);

	unsigned int			shortestSpan() const;
	unsigned int			longestSpan() const;

	std::list<int>&			getList();
	void					printList();


	bool					isDup(int value);
	void					addNumber(int input_size, int max_num);


// <1>
	// template<typename InputIterator> // inputs are container's iterator
	// void	addNumber(InputIterator first, InputIterator last)
	// {
	// 	if (size < list.size() + (last - first))
	// 	{
	// 		throw MaxSizeException();
	// 	}
	// 	else
	// 	{
	// 		list.insert(list.end(), first, last);
	// 		std::list<int>		tmp(list);
	// 		tmp.sort();
	// 		this->largest = *(tmp.end());
	// 		this->smallest = *(tmp.begin());
	// 	}
	// }

	class MaxSizeException : public std::exception
	{
		const char* what(void) const throw();
	};

	class MinSizeException : public std::exception
	{
		const char* what(void) const throw();
	};
	class InputBoundsException : public std::exception
	{
		const char* what(void) const throw();
	};

};
#endif
