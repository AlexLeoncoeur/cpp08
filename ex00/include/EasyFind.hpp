#pragma once

# include <algorithm>
# include <iostream>
# include <vector>

class notFound : public std::exception
{

public:

	const char *what() const throw()
	{
		return ("Not found in the container");
	}

};

template <typename T>
void	easyFind(T &container, int search)
{
	typename T::iterator i;

	i = std::find(container.begin(), container.end(), search);
	if (i == container.end())
		throw notFound();
	else
		std::cout << "Value: " << search << " found in pos: " << std::distance(container.begin(), i) << std::endl;
}
