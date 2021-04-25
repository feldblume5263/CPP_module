#ifndef EASYFIND_HPP
# define EASYFIND_HPP


# include <algorithm>

// int형 '컨테이너'로 가정
class CantFindException : public std::exception
{
	const char* what(void) const throw();
};

const char*								CantFindException::what(void) const throw()
{
	return ("Can not find it");
}

template<typename T>
typename T::iterator					easyfind(T& conatiner, int value)
{
	typename T::iterator found = std::find(conatiner.begin(), conatiner.end(), value); // end가 끝날때까지! 헷갈리게 만들어놨네

	if (found == conatiner.end()) //  find(a.begin(), a.end(), s) == a.end()요소 s가 컨테이너에 없음을 의미
	{
		throw CantFindException();
	}
	return (found);
}


#endif
