/*
第24题
*/
#include <iostream>

int table[4];
bool exists_in_table(int v)
{
    for (int i = 0; i <= 4; i++)
    {
        if (table[i] == v)
            return true;
    }
    return false;
}
int value_or_fallback(int *p)
{
    *p = exists_in_table(2);
    // std::cout <<"*p is "<< *p << std::endl;
    return p ? *p : 42;
}

int main()
{
    int a = 2;
    std::cout << value_or_fallback(&a) << std::endl;
    return 0;
}