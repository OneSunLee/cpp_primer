#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int min, max;
    cout << "Two numbers:";
    cin >> min >> max;
    if (min>max){
        std::swap(min,max);
    }
    while (min <= max)
    {
        std::cout << min++ << std::endl;
    };
    return 0;
}