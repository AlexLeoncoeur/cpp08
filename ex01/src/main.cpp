#include "../include/EasyFind.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>



int	main(void)
{
	{
		std::vector<int> vector = {1};
	
		vector.push_back(2);
		vector.push_back(3);
		vector.push_back(8);
		vector.push_back(-2);

		try
		{
			easyFind(vector, -2);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::list<int> lst = {1, 2, 3, 5, -9};

		try
		{
			easyFind(lst, 3);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}