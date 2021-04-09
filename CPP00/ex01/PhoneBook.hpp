#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

# define MAX		8

void				commandAdd(Contact contact[], int *idx);
void				commandSearch(Contact contact[], const int idx);
void				greeter();
void				prompt();
std::string			resizeData(std::string data);
void				searchGreeter(int tag);
void				clearMessage();

#endif
