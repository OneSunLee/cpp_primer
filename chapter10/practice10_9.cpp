/*
Exercises Section 10.2.3
Exercise 10.9: Implement your own version of elimDups.
Test your program by printing the **vector** after you read the input,
after the call to **unique**, and after the call to **erase**.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void elimDups(std::vector<std::string> &words);

int main()
{	
	std::vector<std::string> words;
	while (std::cin >> *(words.emplace(words.end())))//seperated by spaces
	{
		while (std::cin.peek() == ' ')
			std::cin.get();
		if (std::cin.peek() == '\n')
			break;
	}
	for (const std::string& i : words)
		std::cout << i <<'\t';
	std::cout << ": Input part.\n";
	elimDups(words);
	return 0;
}
void elimDups(std::vector<std::string> &words)
{

	std::sort(words.begin(), words.end());
	for (const std::string & i : words)
		std::cout << i <<'\t';
	std::cout << ": Sort part.\n";
	auto end_unique = unique(words.begin(), words.end());
	for (const std::string & i : words)
		std::cout << i <<'\t';
	std::cout << ": Unique part.\n";//the part after unique elements is UB
	words.erase(end_unique, words.end());
	for (const std::string & i : words)
		std::cout << i <<'\t';
	std::cout << ": Erase part.\n";
}