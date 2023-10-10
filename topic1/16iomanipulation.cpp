#include<iostream>
#include<iomanip>             // added for using setw(), setfill(), std::left, std::right
using namespace std;
int main()
{
    cout<<"Boolean values\n";
    bool a=true;
    cout<<a<<"\n";                //1
    cout<<std::boolalpha;
    cout<<a<<"\n";                     //true
    cout<<std::noboolalpha;
    cout<<a<<endl;                             //1


    cout<<"Integer values\n";
    int b=26,c=20;
    cout<<b<<" "<<c<<"\n";           // 26 20
    cout<<std::hex;
    cout<<b<<" "<<c<<"\n";          // 1a 14
    cout<<std::oct;
    cout<<b<<" "<<c<<"\n";         // 32 24
    cout<<std::dec;
    cout<<b<<" "<<c<<"\n";        // 26 20


    cout<<"Integer values using showbase/noshowbase, showpos/noshowpos, uppercase/nouppercase\n";
    int d=26;
    cout<<std::showbase;
    cout<<std::oct;
    cout<<d<<"\n";
    cout<<std::hex;
    cout<<d<<"\n";
    cout<<std::showpos;
    cout<<d<<"\n";
    cout<<std::uppercase;
    cout<<d<<"\n";

    cout<<"Formatting Manipulations of output using setw(), setfill(), std::left, std::right\n";
    int e=12;
    cout<<std::setw(5);
    cout<<std::setfill('*');
    cout<<a<<"\n";
    cout<<std::setw(5);
    cout<<"Hi"<<"\n";
    cout<<std::left;
    cout<<std::setw(5);
    cout<<a<<"\n";

    return 0;
}