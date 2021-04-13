#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
private:
	const std::string	name;
	const std::string	face;

public:
	Pony(const std::string& name, const std::string& new_face);

	void				runningPony();
	void				disapeared();
};

void	ponyOnTheStack();
void	ponyOnTheHeap();
void	makeBlank();


#endif
