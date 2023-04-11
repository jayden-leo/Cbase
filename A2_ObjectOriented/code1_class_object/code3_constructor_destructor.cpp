#include<iostream>
using namespace std;
/*
    构造函数是创建的时候执行 和类名一直；
    析构函数是销毁的时候执行 类名前加一个~；
*/
class Line{
    public:
        void setLength(double len){
            length = len;
        };
        double getLength(void){
            return length;
        };
        Line(){
            cout << "Object is being created!!" <<endl;
        }; // 这就是构造函数
        ~Line(){
            cout << "Object is being deleted!!" <<endl;
        }
    
    private:
        double length;
};


int main(){
    Line line;
    line.setLength(6.0);
    cout << "Length of line : " <<line.getLength() <<endl;
    return 0;
}