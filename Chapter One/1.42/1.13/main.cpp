//1.13 使用for循环重做1.4.1节中的所有练习（第13页）。

#include <iostream>

int main() {
    int aa=0;
    std::cout<<"1   practice 1.9"<<std::endl;
    std::cout<<"2   practice 1.10"<<std::endl;
    std::cout<<"3   practice 1.11"<<std::endl;
    std::cout<<"Input to perform exercise options"<<std::endl;
    std::cin>>aa;
    switch (aa)
        case 1:
            int sum=0,val=50;
    while(val<=100){
        sum+=val;
        ++val;
    }
    std::cout<<"Sum of 50 to 100 inclusive is "<<sum<<std::endl;
            break;
        case 2:
            
            break;
    return 0;
}