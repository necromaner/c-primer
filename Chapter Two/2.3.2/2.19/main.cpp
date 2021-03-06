//2.19 说明指针和引用的主要区别。

//指针-对于一个类型T，T*就是指向T的指针类型，也即一个T*类型的变量能够保存一个T对象的地址，而类型T是可以加一些限定词的，如const、volatile等等。见下图，所示指针的含义：
//引用-引用是一个对象的别名，主要用于函数参数和返回值类型，符号X&表示X类型的引用。

/*
 * 首先，引用不可以为空，但指针可以为空。前面也说过了引用是对象的别名，引用为空——对象都不存在，怎么可能有别名！故定义一个引用的时候，必须初始化。因此如果你有一个变量是用于指向另一个对象，但是它可能为空，这时你应该使用指针；如果变量总是指向一个对象，i.e.，你的设计不允许变量为空，这时你应该使用引用。如下图中，如果定义一个引用变量，不初始化的话连编译都通不过（编译时错误）
 * 而声明指针是可以不指向任何对象，也正是因为这个原因，使用指针之前必须做判空操作，而引用就不必。
 * 其次，引用不可以改变指向，对一个对象"至死不渝"；但是指针可以改变指向，而指向其它对象。说明：虽然引用不可以改变指向，但是可以改变初始化对象的内容。例如就++操作而言，对引用的操作直接反应到所指向的对象，而不是改变指向；而对指针的操作，会使指针指向下一个对象，而不是改变所指对象的内容。
 * 再次，引用的大小是所指向的变量的大小，因为引用只是一个别名而已；指针是指针本身的大小，4个字节。
 * 最后，引用比指针更安全。由于不存在空引用，并且引用一旦被初始化为指向一个对象，它就不能被改变为另一个对象的引用，因此引用很安全。对于指针来说，它可以随时指向别的对象，并且可以不被初始化，或为NULL，所以不安全。const 指针虽然不能改变指向，但仍然存在空指针，并且有可能产生野指针（即多个指针指向一块内存，free掉一个指针之后，别的指针就成了野指针）。
 * 总而言之，言而总之——它们的这些差别都可以归结为"指针指向一块内存，它的内容是所指内存的地址；而引用则是某块内存的别名，引用不改变指向。"
 * http://blog.csdn.net/listening_music/article/details/6921608
 */
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}