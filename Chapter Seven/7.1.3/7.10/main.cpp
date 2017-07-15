//7.10：在下面if语句中，条件部分的作用是什么？
//if(read(read(cin,data1),data2)

#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    string address;

    string getName() const {return name;}
    string getAddress() const {return address;}
};

istream &read(istream &is,Person &information){
    cout<<"name :";
    is>>information.name;
    cout<<"address : ";
    is>>information.address;
}

int main() {
    Person data1;
    Person data2;
    if(read(read(cin,data1),data2)){
        cout<<"yes";
    }
        return 0;
}