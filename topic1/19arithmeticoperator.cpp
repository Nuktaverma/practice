#include<iostream>
using namespace std;
int main()
{
    cout<<"Binary operators\n";
    int x=20,y=10;
    cout<<(x+y)<<"\n"
        <<(x-y)<<"\n"
        <<(x%y)<<"\n"
        <<(x*y)<<"\n"
        <<(x/y)<<"\n";

    cout<<"See the differene between 10%3 ="<<(10%3)<<" and -10%3 ="<<(-10%3)<<" and 10%(-3) ="<<(10%(-3))<<"\n";
    cout<<"Also, See the differene between 10/3 ="<<(10/3)<<" and -10/3 ="<<(-10/3)<<" and 10/(-3) ="<<(10/(-3))<<"\n";


    cout<<"Unary operators i.e increment and decrement\n";
    int a=10;
    int b=a++;
    int c=++a;
    cout<<a<<"\n"
        <<b<<"\n"
        <<c<<"\n";
    return 0;
}