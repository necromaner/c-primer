//5.16：while循环特别适用于那种条件保持不变，反复执行操作的情况，例如，当未达到文件末尾时不断读取下一个值。For循环则更像是在按步骤迭代，它的索引值在某个范围内依次变化。根据每种循环的习惯用法各自编写一段程序，然后分别用另一种循环改写。如果只能用一种循环，你倾向于使用哪种呢？为什么?

//倾向于for，一步步执行，比while更方便
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}