#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number : ";
    cin>>a;
    if(a%2==0)
        cout<<"Opponent win";
    else
        cout<<"You win";
    return 0;
}