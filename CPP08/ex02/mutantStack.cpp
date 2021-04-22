#ifndef MUTANTSTACK_CPP
# define MUTANTSTACK_CPP

# include "mutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

template<typename T>
MutantStack<T>::~MutantStack()
{

}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) : std::stack<T>(other)
{

}

template<typename T>
MutantStack<T>&			MutantStack<T>::operator=(const MutantStack<T>& other)
{
	MutantStack<T>::stack.operator=(other);
	this->iterator = other.iterator;
}


#endif
