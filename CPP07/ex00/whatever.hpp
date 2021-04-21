#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// 함수나 클래스를 개별적으로 다시 작성하지 않아도, 여러 자료 형으로 사용할 수 있도록 하게 만들어 놓은 틀.
// 이 과제에서는 함수 템플릿을 만드는 듯.

template<typename T>
void			swap(T& a, T& b)
{
	T			tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T&				min(T& a, T& b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

template<typename T>
T&				max(T& a, T& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}


// 상수가 들어올 경우에는 오류가 난다. const를 붙여주니 해결.
// 이 부분은 main 뒤에서 실험 했음.

template<typename T>
const T&				min(const T& a, const T& b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

template<typename T>
const T&				max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
