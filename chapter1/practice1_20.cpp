/*
Exercises Section 1.5.1
Exercise 1.20: http://www.informit.com/title/032174113
contains a copy of Sales_item.h in the Chapter 1 code directory.
Copy that file to your working directory.
Use it to write a program that reads a set of book sales transactions,
writing each transaction to the standard output.
*/
// Sales_item.h
// 1. .isbn() get ISBN number
// 2. >> << write read
// 3. =  assignment
// 4. +  add the amount of sold books and money
// 5. += add
// books.txt
/*
0-201-70353-X 4 24.99
0-201-82470-1 4 45.39
0-201-88954-4 2 15.00 
0-201-88954-4 5 12.00 
0-201-88954-4 7 12.00 
0-201-88954-4 2 12.00 
0-399-82477-1 2 45.39
0-399-82477-1 3 45.39
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
*/
#include <iostream>
#include "Sales_item.h"
#include <vector>
int main()
{
    std::vector<Sales_item> books;
    while (std::cin>>*(books.emplace(books.end()))); // copy and paste book.txt in terminal, and control+D EOF
    books.pop_back();     // emplace construct one more, so pop_back
    for (const Sales_item &book : books)
        std::cout << book << "\n";
    return 0;
}
