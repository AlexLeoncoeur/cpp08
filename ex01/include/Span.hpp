#pragma once

# include <vector>
# include <algorithm>
# include <iostream>

class Span
{

private:

	unsigned int		_N;
	std::vector<int>	_Numbers;

public:

	Span();
	Span(unsigned int n);
	Span(const Span &toCopy);
	~Span();

	Span &operator=(const Span &rhs);

	int		shortestSpan(void);
	int		longestSpan(void);
	void	addNumber(int nb);
	void	fillNumberRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
	void	printNumbers(void);

	class limitReached : public std::exception
	{

	public:

		const char *what() const throw()
		{
			return ("Error: Container limit reached");
		}

	};

	class noSpanFound : public std::exception
	{

	public:

		const char *what() const throw()
		{
			return ("Error: Span not found");
		}

	};

	class badRange : public std::exception
	{

	public:

		const char *what() const throw()
		{
			return ("Error: range is out of scope");
		}

	};
};