#include "iter.hpp"

int main(void)
{
	int				intARR[5] = { 0, 5, 6, 10, 23 };

	iter(intARR, 5, &print);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;


	float			floatARR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatARR, 5, &print);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;


	double			doubleARR[5] = { 0.00, 1.11, 2.22, 3.33, 5.55 };
	iter(doubleARR, 5, &print);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;


	bool			boolARR[2] = { false, true };
	iter(boolARR, 2, &print);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;



	std::string stringARR[5] = { "string1", "string2", "s t r i n g 3", "string4", "    string5" };
	iter(stringARR, 5, &print);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;

	iter(stringARR, 2, &print);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;

	// 출력되지 않는다.
	iter(stringARR, 0, &print);
	std::cout << "never??" <<std::endl;
	std::cout << std::string(60, '-') << std::endl;

	// 다시 int
	// 이렇게 함수 뒤에 <type>을 붙여주면 함수 타입을 명시할 수 있음.
	iter(intARR, 3, &print<int>);
	std::cout << std::endl;
	iter(doubleARR, 5, &is5x<double>);
	iter(intARR, 5, &is5x<int>);
	iter(intARR, 3, &print<int>);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;


	//Bounus
	// iter(stringARR, 5, &is5x<std::string>); // string은 상수와 비교할 수 없음.
	char		charARR[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(doubleARR, 5, &is5x<double>);
	iter(intARR, 5, &is5x<int>);
	// iter(charARR, 5, &is5x<int>); // char도 마찬가지..! char vs int , char vs const int 모두 다 안됨.
	iter(boolARR, 2, &is5x<bool>);

	iter(stringARR, 3, &print<std::string>);
	std::cout << std::endl;
}
