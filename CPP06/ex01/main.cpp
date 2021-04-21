#include <iostream>
#include <string>


struct				Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

Data*				deserialize(void* raw)
{
	Data*			data = new Data;

	// 변환 과정 이해
	///////////////////////////////////////////////
	//std::string*	temp;                        //
	//temp = reinterpret_cast<std::string*>(raw);//
	//std::cout << *temp << std::endl;           //
	///////////////////////////////////////////////

	data->s1 = *reinterpret_cast<std::string*>(raw);
	data->n = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + sizeof(std::string));
	data->s2 = *reinterpret_cast<std::string*>(reinterpret_cast<char*>(raw) + sizeof(std::string) + sizeof(int));
	return (data);
}


void*				serialize() // 주소값을 특정 규칙으로 암호화하는 함수. main에서는 raw의 주소값이 암호화된다.
{
	std::string		code = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int				idx;
	std::string		s1;
	std::string		s2;
	int				n;

	n = rand();
	idx = 0;
	while (idx < 8)
	{
		s1 += code[rand() % code.length()];
		s2 += code[rand() % code.length()];
		idx++;
	}
	// (리인터프리터를 사용할 것이다. = 포인터 -> 포인터, 포인터 -> 일반변수, 일반변수 -> 포인터)
	char*		ret = new char[(sizeof(std::string) * 2) + sizeof(int)]; // void* 가 안되는 이유? 일단 [arithmetic on a pointer to void] 이런 오류가 뜬다..
	// char* 로 사용하는 경우도 확인함. // int* 도 같은 크기인데 왜 안될까??????????
	// std::cout << sizeof(std::string *) << sizeof(int *) << sizeof(void *) << sizeof(char *) << std::endl; // 모두 8로 동일하다.
	// 다만 stackoverflow에서는 반드시 같다는 것을 보장할 수 없다고 한다... 무슨 말인지는 다 이해하진 못했지만 아키텍쳐 문제 같음. 여기서 int* 가 안되는 이유인 것 같다.
	// std::cout << s1 << std::endl;
	*reinterpret_cast<std::string*>(ret) = s1; // 주솟값 자체가 s1의 랜덤한 8자리 값을 가짐!
	*reinterpret_cast<int*>(ret + sizeof(std::string)) = n; // ret의 시작값에서 string 사이즈의 뒤에다가 n을 넣어준다.
	// ?? 왜 포인터 사이즈가 아닐까? s1의 크기가 sizeof(string)이기 때문. 우리는 주솟값을 만드는 것이다.
	*reinterpret_cast<std::string*>(ret + sizeof(std::string) + sizeof(int)) = s2; // 마찬가지로 주솟값 끝에 s2의 '값'을 넣는다.

	return (reinterpret_cast<void*>(ret));
}

int					main(void)
{
	int				idx;

	idx = 0;
	srand(time(NULL));
	while (idx < 10)
	{
		std::cout << "test" << idx << ": " << std::endl;

		void* raw = NULL;
		// std::cout << raw << std::endl;
		raw = serialize();
		// std::cout << (char *)raw << std::endl; // 주소값이 다음과 같이 나오는 것을 확인 가능.

		Data* data = deserialize(raw);

		std::cout << "\ts1: " << data->s1 << std::endl;
		std::cout << "\t n: " << data->n << std::endl;
		std::cout << "\ts2: " << data->s1 << std::endl;

		delete raw;
		delete data;
		idx++;
	}
}
