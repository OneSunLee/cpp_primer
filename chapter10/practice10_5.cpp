/*
Exercise 10.5: In the call to equal on rosters, 
what would happen if both rosters held C-style strings, 
rather than library strings?
*/
//Not exist any Difference?
#include <iostream> 
#include <algorithm>

int main()
{
	char roster1[]="I am Jack.";
	char roster2[]="I am Jack. You are Kim.";
	if(std::equal(roster1,&(roster1[strlen(roster1)]),roster2))
		std::cout<<"true";
	else 
		std::cout<<"false";
	std::cout<<std::endl;
	return 0;
}