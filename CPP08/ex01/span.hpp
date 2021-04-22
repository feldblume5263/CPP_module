#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>
# include <iostream>

class			span
{
private:
	std::list<int>		list;
	unsigned int		size;
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

	const std::list<int>&	getList() const;

// <1>
	template<typename InputIterator>
	void	addNumber(InputIterator first, InputIterator last)
	{
		if (size < list.size() + (last - first))
		{
			throw MaxSizeException();
		}
		else
		{
			list.insert(list.end(), first, last);
		}
	}

	class MaxSizeException : public std::exception
	{
		const char* what(void) const throw();
	};

	class MinSizeException : public std::exception
	{
		const char* what(void) const throw();
	};

};
#endif
