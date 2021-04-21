#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*				generate(void);
void				identify_from_pointer(Base *p);
void				identify_from_reference(Base &p);

Base*				generate(void)
{
	int				idx;

	idx = rand() % 3;
	if (idx == 0)
	{
		std::cout << "Wizard's hat:\tYou are A" << std::endl;
		return (new A);
	}
	else if (idx == 1)
	{
		std::cout << "Wizard's hat:\tYou are B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Wizard's hat:\tYou are C" << std::endl;
		return (new C);
	}
}

// 다이나믹 캐스팅을 사용해야함.

// 다이나믹 캐스팅?
// static cast를 할 경우 upcast는 문제가 안되지만, down cast를 할 경우에는 문제가 생길 수 있다. Base->A? Base->B? 모른다. 실수가 날 수 있다.
// ex) A* a = static_cast<B*>(base[0]); 이 경우 문제가 생긴다.
// 다이나믹 캐스팅을 쓰면, 클래스 자료형을 비교할 수 있다. 한마디로 개발자의 실수를 방지하기 위함! 하지만 속도는 좀 느리다고 한다.

void				identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p)) // 다를 경우 NULL 반환
	{
		std::cout << "I'm A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "I'm B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "I'm C" << std::endl;
	}
}


// 레퍼런스의 경우 다르다. IBM i에서 가져온 프로토타입

// void payroll::calc (employee &re) {
//    // employee salary calculation
//    try {
//       manager &rm = dynamic_cast<manager&>(re);
//       // use manager::bonus()
//    }
//    catch (bad_cast) {
//       // use employee's member functions
//    }
// }

void				identify_from_reference(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p); // 여기서 문제가 생기면 밑을 실행하지 않고 catch로 넘어간다..오히려 직관적?
		std::cout << "I'm A" << std::endl;
	}
	catch (std::bad_cast)
	{

	}
	try
	{
		(void)dynamic_cast<B&>(p); // 여기서 문제가 생기면 밑을 실행하지 않고 catch로 넘어간다..오히려 직관적?
		std::cout << "I'm B" << std::endl;
	}
	catch (std::bad_cast)
	{

	}
	try
	{
		(void)dynamic_cast<C&>(p); // 여기서 문제가 생기면 밑을 실행하지 않고 catch로 넘어간다..오히려 직관적?
		std::cout << "I'm C" << std::endl;
	}
	catch (std::bad_cast)
	{

	}

}

int					main(void)
{
	int				idx;

	srand(time(NULL));

	idx = 0;
	while (idx < 50)
	{
		std::cout << "Test " << idx + 1 << std::endl;

		Base*		base = generate();

		std::cout << "Pointer:\t";
		identify_from_pointer(base);
		std::cout << "Reference:\t";
		identify_from_reference(*base);
		std::cout << std::endl;
		delete base;
		idx++;
	}
	return (0);
}
