#include "whatever.hpp"
#include <iostream>

int main( void )
{
	// int
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;


	// 문자열

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	// 스트링의 크기는 어떻게 정해지는가?
	// 아스키 코드 기준이다. 앞에서부터 비교.


	// char
	char e = '*';
	char f = '#';
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( c, d ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( e, f ) << std::endl;


	// 상수
	std::cout << "min( 42, 21 ) = " << ::min( 42, 21) << std::endl;
	std::cout << "max( 42, 21 ) = " << ::max( 42, 21) << std::endl;

	return (0);
}
