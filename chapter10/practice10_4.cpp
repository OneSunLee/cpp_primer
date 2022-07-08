/*
Exercise 10.4: Assuming v is a vector<double>, 
what, if anything, is wrong with calling accumulate(v.cbegin(), v.cend(), 0)?
*/
//cbegin:	eturns an iterator to the beginning of the read-only given range
//begin:	returns an iterator to the beginning of the given range
//0 => 0.0 would change the result.
#include <iostream> 
#include <vector>
#include <numeric>

int main()
{
	std::vector<double> vec;
	std::cout<<	"Input a serial of numbers seperated with spaces:\n";
	while(std::cin>> *(vec.emplace(vec.end())))
	{
		while(std::cin.peek()==' ')
			std::cin.get();
		if(std::cin.peek()=='\n')
			break;
	}
	std::cout<<	std::accumulate(vec.cbegin(),vec.cend(),0.0)<<std::endl;
	return 0;
}