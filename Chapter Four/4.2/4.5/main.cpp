/*4.5：写出下列表达式的求值结果。
(a)-30*3+21/5 (b)-30+3*21/5
(c)30/3*21%5 (d)-30/3*21%4

 */


//a
#include <iostream>

int main() {
    std::cout << "(a)-30*3+21/5 = " << -30*3+21/5<<std::endl;//-90+4=-86
    std::cout << "(b)-30+3*21/5 = " << -30+3*21/5<<std::endl;//-30+12=-18
    std::cout << "(c)30/3*21%5 = " << 30/3*21%5<<std::endl;//210%5=0
    std::cout << "(d)-30/3*21%4 = " << -30/3*21%4<<std::endl;//-210*4=-2
    return 0;
}