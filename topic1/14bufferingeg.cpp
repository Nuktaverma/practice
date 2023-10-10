#include<iostream>
using namespace std;
int main()
{         // in buffering we can write two integers in one go only
    int x,y;
    cout<<"Enter first integer : \n";
    cin>>x;                             // 25 20
    cout<<"Enter second integer : \n";
    cin>>y;
    cout<<"Multiplication is "<<(x*y);
    return 0;
}