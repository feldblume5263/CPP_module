#include "PhoneBook.hpp"

void				clearMessage()
{
	system("read");
	system("clear");
}

void				prompt()
{
	std::cout << ">>>> menu <<<<<" << std::endl << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl << std::endl;
}

void				greeter()
{
	system("clear");
	std::cout << "               _                           " << std::endl;
	std::cout << " __      _____| | ___ ___  _ __ ___   ___  " << std::endl;
	std::cout << " \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ " << std::endl;
	std::cout << "  \\ V  V /  __/ | (_| (_) | | | | | |  __/ " << std::endl;
	std::cout << "   \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___| " << std::endl;
	system("sleep 2");
	system("clear");
}
