#include <iostream>
#include <algorithm>

void p1_9()
{
    int i = 50, sum = 0;
    for (;i<=100;++i)
    {
        sum += i;
    };
    std::cout << sum << std::endl;
}

void p1_10()
{
    int i = 10;
    for (;i>=0;--i)
    {
    std::cout << i << std::endl;
    };
}

void p1_11()
{
    int min, max;
    std::cout << "Two numbers:";
    std::cin >> min >> max;
    if (min>max){
        std::swap(min,max);
    }
    for (;min<=max;++min)
    {
        std::cout << min << std::endl;
    };
}

int main()
{
    p1_9();    
    p1_10();
    p1_11();
    return 0;
}