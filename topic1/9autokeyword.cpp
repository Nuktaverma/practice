#include<iostream>
#include<typeinfo>              // header file used for typeid()
using namespace std;
int main()
{
    auto a=10;
    auto b=15.5;
    cout<<a<<"\n"<<b<<"\n";          // 10      \n 15.5
    cout<<typeid(a).name()<<"\n"      //i      // typeid() gives the short name of datatype used to declare variable
        <<typeid(b).name();           //d
    return 0;
}