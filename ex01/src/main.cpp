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
	
	empty.addNumber(4);
	five.addNumber(1);
	five.addNumber(2);
	five.addNumber(3);
	five.addNumber(4);
	five.addNumber(5);
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

	return 0;
}