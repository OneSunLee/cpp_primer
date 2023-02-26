/*
第23题
*/
#include <iostream>

struct stdus
{
    char a;
    short b;
    char c;
    int d;
};

int main()
{
    stdus num = {'1', 2, '3', 4};
    char *p = reinterpret_cast<char *>(&num);
    std::cout << sizeof(num.a) << std::endl;
    std::cout << sizeof(num.b) << std::endl;
    std::cout << sizeof(num.c) << std::endl;
    std::cout << sizeof(num.d) << std::endl;
    std::cout << sizeof(num) << std::endl;
    std::cout << *p << std::endl;
    std::cout << *reinterpret_cast<short *>(p+2) << std::endl;
    std::cout << *(p+4) << std::endl;
    std::cout << *reinterpret_cast<int *>(p+8) << std::endl;
}