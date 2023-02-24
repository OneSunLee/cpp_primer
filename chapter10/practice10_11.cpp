/*
Exercises Section 10.3.1
Exercise 10.11: Write a program that uses stable_sort and isShorter to sort a vector
passed to your version of elimDups. Print the vector to verify that your program is correct.
*/
//predicate. unary predicate. binary predicate
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elimDups(std::vector<std::string> &words);
bool isShorter(const std::string &s1, const std::string &s2);
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
	elimDups(words);
	std::stable_sort(words.begin(),words.end(), isShorter);
	for(const auto s:words)
	std::cout<<s<<"\t";
	std::cout << ": Keep order sort."<<std::endl;
	return 0;
}

void elimDups(std::vector<std::string> &words)
{

	std::sort(words.begin(), words.end());
	for (const std::string & i : words)
		std::cout << i << '\t';
	std::cout << ": Sort part.\n";
	auto end_unique = unique(words.begin(), words.end());
	for (const std::string & i : words)
		std::cout << i << '\t';
	std::cout << ": Unique part.\n"; // the part after unique elements is UB
	words.erase(end_unique, words.end());
	for (const std::string & i : words)
		std::cout << i << '\t';
	std::cout << ": Erase part.\n";
}

bool isShorter(const std::string &s1, const std::string &s2)
{
	return s1.size()<s2.size();
}