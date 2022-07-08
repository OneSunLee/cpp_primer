/*
Exercise 10.2: Repeat the previous program, but read values into a list of strings.
*/
#include <iostream> 
#include <algorithm> 
#include <list> 

int main()
{
	std::list<int> vec;
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