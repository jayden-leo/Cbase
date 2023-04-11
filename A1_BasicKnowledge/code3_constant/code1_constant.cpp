#include<iostream>

using namespace std;
/*
    常量是固定值，在程序执行期间不会改变。这些固定的值，又叫做字面量。

    整数常量可以是十进制、八进制或十六进制的常量。
    前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。

    整数常量也可以带一个后缀，后缀是 U 和 L 的组合，
    U 表示无符号整数（unsigned），L 表示长整数（long）。
    后缀可以是大写，也可以是小写，U 和 L 的顺序任意。
*/
int main(){
    const int a1 = 212;                 // 10进制
    const unsigned int a2 = 215u;       // 10进制无符号
    const long a3 = 0xFeel;             // 16进制0x/0X 的长整形l/L
    const int a4 = 077;                 // 8进制
    // const int a5 = 078;              // 非法： 8 不是八进制的数字
    // const int a6 = 032UU;            //非法： U不能重复

    const float b1 = 3.14159;            // 10进制浮点数
    const float b2 = 314159E-5L;
    return 0;
}