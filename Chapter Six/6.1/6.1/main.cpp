//6.1；实参和形参的区别是什么？

//形参:变量只有在被调用时才分配内存单元，在调用结束时，即刻释放所分配的内存单元。因此，形参只在函数内部有效。函数调用结束返回主调用函数后则不能再使用该形参变量。
//实参:可以是常量、变量、表达式、函数等，无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参。因此应预先用赋值，输入等办法使参数获得确定值。
//相同：实参和形参在数量上，类型上、顺序上应严格一致，否则就会发生类型不匹配的错误。
//不同：在一般传值调用的机制中只能把实参传送给形参，而不能把形参的值反向地传送给实参。因此在函数调用过程中，形参值发生改变，而实参中的值不会变化。而在引用调用的机制当中是将实参引用的地址传递给了形参，所以任何发生在形参上的改变实际上也发生在实参变量上。
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}