// 1.8 指出下列哪些输出语句是合法的（如果有的话）：
//    std::cout << "/*";
//    std::cout << "*/";
//    std::cout << /* "*/" */;
//    std::cout << /* "*/" /* "/*" */;
// 预测编译这些语句会产生什么样的结果，实际编译这些语句来验证你的答案（编写一个小程序，每次将上述一条语句作为其主体），改正每个编译错误。


// (1)
#include <iostream>

int main() {
    std::cout << "/*";
    return 0;
}
//输出 "/*"

// (2)
#include <iostream>

int main() {
    std::cout << "*/";
    return 0;
}
//输出 "*/"

// (3)错误
#include <iostream>

int main() {
    std::cout << /* "*/" */;
    return 0;
}
//改正:
#include <iostream>

int main() {
    std::cout <</* "*/" */";
    return 0;
}
//输出 "*/"

// (4)
#include <iostream>

int main() {
    std::cout << /* "*/" /* "/*" */;
    return 0;
}
//输出 "/*"
