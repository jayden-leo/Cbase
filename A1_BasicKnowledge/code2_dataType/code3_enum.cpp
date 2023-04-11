#include<iostream>

using namespace std;

enum color{red,green=5,blue}c;

int main(){
    c = blue;
    cout << c << endl; //磨人输出索引0,1,2  当给某一个复制后，后面的依次+1 所以答案是 6
    return 0;
}