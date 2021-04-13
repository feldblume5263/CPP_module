#include <iostream>

int				main(void)
{
	std::cout << "---------- ORIGINAL MESSAGE ----------" << std::endl << std::endl;
	std::string	message = "HI THIS IS BRAIN";

	std::string* ptr = &message;
	std::string& ref = message;

	std::cout << "<<THIS IS MESSAGE>>" << std::endl;
	std::cout << message << std::endl << std::endl;

	std::cout << "<<THIS IS POINTER>>" << std::endl;
	std::cout << *ptr << std::endl << std::endl;

	std::cout << "<<THIS IS REFERENCE>>" << std::endl;
	std::cout << ref << std::endl << std::endl;

	std::cout << "---------- CHANGED MESSAGE -----------" << std::endl << std::endl;

	message = "THIS MESSAGE IS CHANGED";

	std::cout << "<<THIS IS MESSAGE>>" << std::endl;
	std::cout << message << std::endl << std::endl;

	std::cout << "<<THIS IS POINTER>>" << std::endl;
	std::cout << *ptr << std::endl << std::endl;

	std::cout << "<<THIS IS REFERENCE>>" << std::endl;
	std::cout << ref << std::endl << std::endl;
}
