#include "PhoneBook.hpp"

void				commandSearch(Contact contact[], const int idx)
{
	int				size;

	if (idx == 0)
	{
		std::cout << "No Data in Memory" << std::endl;
		clearMessage();
	}
	else
	{
		searchGreeter(0);
		size = 0;
		while (size < idx)
			contact[size++].getContacts();
		searchGreeter(1);
		size = 0;
		while (1)
		{
			std::cout << "Select index ( ~ ";
			std::cout << idx;
			std::cout << ")" << std::endl;
			std::cin >> size;
			if (std::cin.eof())
				return ;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(2147483647, '\n');
				continue ;
			}
			if (size <= idx && size > 0)
				break ;
		}
		if (size != 0)
			contact[size - 1].printContact();
		clearMessage();
	}
}

void				commandAdd(Contact contact[], int *idx)
{
	if ((*idx) < MAX)
	{
		(*idx)++;
		contact[(*idx) - 1].putContact(*idx);
	}
	else
		std::cout << "The phone book can contain up to 8 people" << std::endl;
	clearMessage();
}

int					main(void)
{
	std::string		input;
	Contact			contact[MAX];
	int				idx;

	greeter();
	idx = 0;
	while (1)
	{
		prompt();
		std::cin >> input;
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			commandAdd(contact, &idx);
		else if (input == "SEARCH")
			commandSearch(contact, idx);
		std::cout << std::endl;
		input.erase();
	}
	return (1);
}
