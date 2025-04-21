#include "../../include/Span.hpp"

Span::Span() : _N(0), _Numbers(0)
{
	this->_Numbers.reserve(0);
	return ;
}

Span::Span(unsigned int n) : _N(n), _Numbers()
{
	this->_Numbers.reserve(n);
	return ;
}

Span::Span(const Span &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

Span::~Span()
{
	return ;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_Numbers = rhs._Numbers;
	}
	return (*this);
}

void	Span::addNumber(int nb)
{
	try
	{
		if (this->_Numbers.size() + 1 > this->_N)
			throw Span::limitReached();
		this->_Numbers.push_back(nb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

void	Span::fillNumberRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	std::srand(time(NULL));
	this->_Numbers.clear();
	for (std::vector<int>::iterator it = start; it <= end && this->_Numbers.size() < this->_N; it++)
	{
		this->addNumber(std::rand() % 1000);
	}
	return ;
}
//y si los datos estan fuera del vector que pasa?

int	Span::shortestSpan(void)
{
	try
	{
		if (this->_Numbers.size() < 2)
		{
			throw Span::noSpanFound();
		}
		int	shortestSpan = this->_Numbers[2] - this->_Numbers[1];

		for (size_t i = 0; i < this->_Numbers.size(); i++)
		{
			int	actualSpan = this->_Numbers[i + 1] - this->_Numbers[i];
			if (actualSpan < shortestSpan)
				shortestSpan = actualSpan;
		}
		return (shortestSpan);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (-1);
	}
	
}

int	Span::longestSpan()
{
	try
	{
		if (this->_Numbers.size() < 2)
		{
			throw Span::noSpanFound();
		}
		std::vector<int> aux = this->_Numbers;
		std::sort(aux.begin(), aux.end());
		return (aux.back() - aux.front());		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (-1);
	}
}

void	Span::printNumbers()
{
	for (size_t i = 0; i < this->_Numbers.size(); i++)
		std::cout << i << ": " << this->_Numbers[i] << std::endl;
}