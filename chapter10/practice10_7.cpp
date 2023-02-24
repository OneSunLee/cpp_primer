/*
Exercise 10.7: Determine if there are any errors in the following programs and, if so, correct the error(s):
(a)
	vector<int> vec;
	list<int> lst;
	int i;
	while (cin >> i)
		lst.push_back(i);
	copy(lst.cbegin(), lst.cend(), vec.begin());
(b)
	vector<int> vec;
	vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
	fill_n(vec.begin(), 10, 0);
*/
//solution a:  modify "vec.begin()" into "back_iterator(vec)"
//solution b1: modify "reserve" into "resize"
//solution b2: modify "reserve" into "resize"
//考查知识点为，算法只操作（改查）迭代器，不增删数据结构，增删要通过迭代器部分实现，因此要使用back_iterator()
//back_iterator()中调用了push_back()
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int test1();
int test2();
int main()
{
	test1();
	test2();
	return 0;
}

int test1()
{
	vector<int> vec;
	list<int> lst;
	int i;
	// while (cin >> i)
	// 	lst.push_back(i);
	while (cin >> *(lst.emplace(lst.end())));//没有move操作，更快，control+D结束
	words.erase(words.end()-1);//会多构造了一个
	copy(lst.cbegin(), lst.cend(), back_inserter(vec));
	for (int i : vec)
		std::cout << i;
	std::cout << endl;
	return 0;
}

int test2()
{
	vector<int> vec;

	//解法1
	vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
	fill_n(back_inserter(vec), 10, 0);

	//解法2
	// vec.resize(10); // reserve is covered in § 9.4 (p. 356)
	// fill_n(vec.begin(), 10, 0);

	//显示
	for (const int & i : vec)
		std::cout << i;
	std::cout << endl;
	return 0;
}