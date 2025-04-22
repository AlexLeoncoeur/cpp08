#pragma once

# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:

	typedef	typename std::stack<T>::container_type::iterator iterator;

	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack &toCopy) : std::stack<T>(toCopy) {};
	~MutantStack() {};

	MutantStack &operator=(const MutantStack &rhs)
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return (*this);
	}

	iterator begin()
	{
		return (this->c.begin());
	}

	iterator end()
	{
		return (this->c.end());
	}
};


/* clase iterator, constructores, operator=, operator[], funciones que devuelvan iteradores de inicio y final(?)
al crear un stack hay que crear el iterador de begin y end */