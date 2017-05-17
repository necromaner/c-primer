/*习5.14：编写一段程序，从标准输入中读取若干string对象并查找连续重复出现的单词。所谓连续重复出现的意思是：一个单词后面紧跟着这个单词本身。要求记录连续出现的最大次数以及对应的单词。如果这样的单词存在，输出重复出现的最大次数。如果不存在，输出一条信息说明任何单词都没有连续出现过。例如，如果输入是
how now now now brown cow cow
那么输出应该表明单词now连续出现了3次。
*/
#include <iostream>
#include<vector>
using namespace std;
int main() {
    string word,nextword,endword;
    vector<string> all;
    int i=1;
    while(cin>>word) {
        all.push_back(word);
        int count = 1;
        while(cin>>nextword) {
            all.push_back(nextword);
            if (word == nextword)
                ++count;
            else if(i<count){
                endword =word;
                i=count;
                cout<<endword<<"  "<<i<<endl;
                break;
                }
            else
                break;
        }
    }
    if(i>1)
        cout<<endword<<"  "<<i<<endl;
    else
        cout<<""<<endl;
    return 0;
}