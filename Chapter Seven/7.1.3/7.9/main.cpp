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
ostream &print(ostream &os,const Person &information){
    os<<"name : "<<information.getName()<<endl;
    os<<"address : "<<information.getAddress() <<endl;
}
int main() {
    Person total;
    read(cin,total);
    print(cout,total);
    return 0;
}