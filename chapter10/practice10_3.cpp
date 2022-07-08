/*
Exercises Section 10.2.1
Exercise 10.3: Use accumulate to sum the elements in a vector<int>.
*/
#include <iostream> 
#include <vector>
#include <numeric>

int main()
{
	std::vector<int> vec;
	std::cout<<	"Input a serial of numbers seperated with spaces:";
	while(std::cin>> *(vec.emplace(vec.end())))
	{
		while(std::cin.peek()==' ')
			std::cin.get();
		if(std::cin.peek()=='\n')
			break;
	}
	std::cout<<	std::accumulate(vec.begin(),vec.end(),0)<<std::endl;
	return 0;
}