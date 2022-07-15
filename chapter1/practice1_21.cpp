/*
Exercise 1.21: Write a program that reads two Sales_item objects
that have the same ISBN and produces their sum.
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
int main()
{
    Sales_item book1, book2;
    std::cin >> book1 >> book2;
    if (book1.isbn() == book2.isbn())
        std::cout << book1 + book2 << std::endl;
    return 0;
}