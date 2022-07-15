/*
Exercise 1.22: Write a program that reads several transactions for the same ISBN.
Write the sum of all the transactions that were read.
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
#include <vector>
#include "Sales_item.h"

int main()
{
    Sales_item sum, book;
    std::cout << "Control+D ends input" << std::endl;
    std::cin >> sum;
    while (std::cin >> book) // control+D EOF
    {
        if (book.isbn() == sum.isbn())
            sum += book;
    }
    std::cout << sum << std::endl;
    return 0;
}