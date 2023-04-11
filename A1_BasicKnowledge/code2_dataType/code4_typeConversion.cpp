#include<iostream>

using namespace std;

class Base{};
class Derived :public Base {};

int main(){
    // 静态转换
    int i = 10;
    float f = static_cast<float>(i);
    cout << f << endl;

    // 动态转换
    Derived* ptr_base = new Derived;
    Base* ptr_derived = dynamic_cast<Base*>(ptr_base); // 将派生类指针转换为基类指针

    // 常量转换
    const int i2 = 10;
    int& r = const_cast<int&>(i); // 常量转换，将const int转换为int

    // 重新解释转换
    int i3 = 10;
    float f3 = reinterpret_cast<float&>(i); // 重新解释将int类型转换为float类型
    return 0;
}