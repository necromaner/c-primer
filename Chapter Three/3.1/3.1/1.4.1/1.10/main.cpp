//1.10 除了++运算符将运算对象的值增加1之外，还有一个递减运算符（  ）实现将值减少1。编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。

#include <iostream>
using std::cout;
using std::endl;
int main() {
    int val=10;
    while(val>=0){
        cout<<val<<endl;
        --val;
    }
    return 0;
}