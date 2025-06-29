#include "../include/Span.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>



int	main(void)
{
	Span	empty;
	Span	five(5);
	Span	fill(100);
	
	empty.shortestSpan();
	empty.addNumber(4);
	five.addNumber(0);
	five.addNumber(20);
	five.addNumber(2);
	five.addNumber(5);
	five.addNumber(10);
	five.addNumber(6);
	Span	copy(five);

	std::vector<int>  v(10);
  	for (size_t i = 0; i < v.capacity(); i++)
 	 {
 	   v[i] = i + 1;
 	 }
	fill.fillNumberRange(v.begin(), v.end() - 1);
	empty.printNumbers();
	copy.printNumbers();
	five.printNumbers();
	fill.printNumbers();
	std::cout << "Shortest: " << five.shortestSpan() << std::endl;
	std::cout << "Longest: " << five.longestSpan() << std::endl;

	return 0;
}