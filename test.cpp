#include <iostream>
#include <vector>

int main(){
    // std::cout<<typeid(decltype(nullptr)).name()<<std::endl;
    //std::cout<<typeid(decltype(nullptr))<<std::endl;
    std::cout<<typeid(nullptr).name()<<std::endl;
    //std::cout<<typeid(nullptr)<<std::endl;
    std::cout<<typeid(3).name()<<std::endl;
    // std::vector<std::vector<int>> a={{{{3,4,5}}}};
    // std::cout<<a[0][2]<<a[0][1]<<std::endl;
    // return 0;
}