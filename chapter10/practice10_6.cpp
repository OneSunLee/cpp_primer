/*
Exercises Section 10.2.2
Exercise 10.6: Using fill_n, write a program to set a sequence of int values to 0.
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec;

	std::cout << "Input a serial of numbers seperated with spaces:\n";
	while (std::cin >> *(vec.emplace(vec.end())))
	{
		while (std::cin.peek() == ' ')
			std::cin.get();
		if (std::cin.peek() == '\n')
			break;
	}
	for(int temp:vec)
		std::cout << temp;
	std::cout << std::endl;
	
	fill_n(vec.begin(), vec.size(), 0);

	for(int temp:vec)
		std::cout << temp;
	std::cout << std::endl;
	return 0;
}