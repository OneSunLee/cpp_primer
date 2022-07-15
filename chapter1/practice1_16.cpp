#include <iostream>
int main()
{
    int a, sum = 0;
    // //https://cplusplus.com/forum/beginner/62834/
    // while (!std::cin.fail())
    // {
    //     std::cout << "Input a number:"<< std::endl;
    //     std::cin >> a;
    //     sum += a;
    // }
    // std::cout << "Sum is: "<< sum 
    //    << ". Enter any letter to quit."<< std::endl;
    std::cout << "Input a serial of numbers:"<< std::endl;
    while(std::cin>>a)//control+D on mac quit
    sum+=a;
    std::cout << "Sum is: "<< sum << std::endl;
    return 0;
}