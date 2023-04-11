#include <iostream>
using namespace std;
/*
    C++ 内联函数是通常与类一起使用。
    如果一个函数是内联的，那么在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方。

    如果想把一个函数定义为内联函数，则需要在函数名前面放置关键字 inline，
    在调用函数之前需要对函数进行定义。如果已定义的函数多于一行，编译器会忽略 inline 限定符。

    在类定义中的定义的函数都是内联函数，即使没有使用 inline 说明符。
*/

inline int Max(int x, int y)
{
   return (x > y)? x : y;
}

// 程序的主函数
int main( )
{

   cout << "Max (20,10): " << Max(20,10) << endl;
   cout << "Max (0,200): " << Max(0,200) << endl;
   cout << "Max (100,1010): " << Max(100,1010) << endl;
   return 0;
}