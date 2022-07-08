/*
Exercises Section 10.1
Exercise 10.1: The algorithm header defines a function named count 
that, like find, takes a pair of iterators and a value. 
**count** returns a count of how often that value appears. 
Read a sequence of ints into a vector and print the count of how many elements have a given value.
*/
#include <iostream> 
#include <algorithm> 
#include <vecotr> 

int main()
{
	std::vector<int> vec;
	int count_num;

	std::cout<<"Input a serial of nubmers seperated with spaces:\n";
	while(std::cin>>*(vec.emplace(vec.end())))
	{
		while(std::cin.peek()==' ')
		{
			std::cin.get();
		}
		if(std::cin.peek()=='\n')
			break;
	};

	std::cout<<"Input the number you want to count:\n";
	std::cin>>count_num;
	std::cout<<"The count result is: " << std::count(vec.begin(),vec.end(),count_num)<<std::endl;
	return 0;
}