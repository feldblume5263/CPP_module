#ifndef EASYFIND_HPP
# define EASYFIND_HPP


# include <algorithm>

template<typename T>
typename T::iterator easyfind(T& conatiner, int value)
{
	typename T::iterator found = std::find(conatiner.begin(), conatiner.end(), value);

	if (found == conatiner.end())
	{
		throw std::exception();
	}
	return (found);
}

#endif
