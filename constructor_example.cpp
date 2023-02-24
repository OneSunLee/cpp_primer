#include <utility>
#include <iostream>

template <int index>
void print()
{
  std::cout << index;
}

template <int... Is>
void foo(std::integer_sequence<int, Is...> const &)
{
  // using unused = int[];
  //(void)unused { 0, (print<Is>(), 0)... }; //调用int([])构造函数构成表达式，(void)来解决unused提示。
  ((print<Is>()), ...); // fold expression c++17用法
}

int main()
{
  foo(std::make_integer_sequence<int, 10>{}); //创建整数序列
  //类似于上面unused的用法，调用构造函数，单纯的{}只是个参数列表，没有类型，只不过这个参数列表为空
} 