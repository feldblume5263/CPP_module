#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class				Contact
{
private:
	int				index;
	std::string		firstName;
	std::string		lastName;
	std::string		nickName;
	std::string		login;
	std::string		phoneNumber;
	std::string		birthDay;
	std::string		meal;
	std::string		underwear;
	std::string		secret;

public:
	Contact();
	void			putContact(int idx);
	void			inputMessage();
	void			getContacts();
	void			getDetail();
	void			printContact();
};




#endif
