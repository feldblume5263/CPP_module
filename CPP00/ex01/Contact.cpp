#include "PhoneBook.hpp"

void			searchGreeter(int tag)
{
	if (tag == 0)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|First Name| Last Name|  Nickname|     Login|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void			Contact::printContact()
{
	std::cout << std::endl;
	std::cout << "First Name : ";
	std::cout << firstName << std::endl;
	std::cout << "Last Name : ";
	std::cout << lastName << std::endl;
	std::cout << "Nick Name : ";
	std::cout << nickName << std::endl;
	std::cout << "Login : ";
	std::cout << login << std::endl;
	std::cout << "Birthday : ";
	std::cout << birthDay << std::endl;
	std::cout << "Favorite Meal : ";
	std::cout << meal << std::endl;
	std::cout << "Underwear Color : ";
	std::cout << underwear << std::endl;
	std::cout << "darkest secret : ";
	std::cout << secret << std::endl;
	std::cout << std::endl;

}

std::string		resizeData(std::string data)
{
	std::string	temp;
	int			idx;

	if (data.size() < 10)
	{
		idx = -1;
		while (++idx < 10 - data.size())
			temp.append(" ");
	}
	if (data.size() > 10)
	{
		temp.append(data.substr(0, 9));
		temp.append(".");
	}
	else
		temp.append(data);
	return (temp);
}

void			Contact::getContacts()
{
	std::cout << "|";
	std::cout << resizeData(std::to_string(index));
	std::cout << "|";
	std::cout << resizeData(firstName);
	std::cout << "|";
	std::cout << resizeData(lastName);
	std::cout << "|";
	std::cout << resizeData(nickName);
	std::cout << "|" << std::endl;
}

void			Contact::inputMessage()
{
	std::cout << "Enter the information of the person" << std::endl;
	std::cout << std::endl;
}

void			Contact::putContact(int idx)
{
	inputMessage();
	Contact::index = idx;
	std::cout << "First Name : ";
	std::cin >> firstName;
	std::cout << "Last Name : ";
	std::cin >> lastName;
	std::cout << "Nick Name : ";
	std::cin >> nickName;
	std::cout << "Login : ";
	std::cin >> login;
	std::cout << "Birthday : ";
	std::cin >> birthDay;
	std::cout << "Favorite Meal : ";
	std::cin >> meal;
	std::cout << "Underwear Color : ";
	std::cin >> underwear;
	std::cout << "darkest secret : ";
	std::cin >> secret;
}

Contact::Contact()
{

}
