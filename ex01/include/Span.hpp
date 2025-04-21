#pragma once

# include <vector>

class Span
{

private:

	unsigned int		_N;
	std::vector<int>	_Numbers;

public:

	Span();
	Span(const Span &toCopy);
	~Span();

	Span &operator=(const Span &rhs);

	void	addNumber(int nb);
	void	shortestSpan();
	void	longestSpan();
	void	addNumberRange(int start, int end);
};