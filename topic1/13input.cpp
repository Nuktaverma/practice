#include<iostream>
using namespace std;
int main()
{                                    // cin is used to take input 
    // string name;
    // cout<<"Enter your name : ";
    // cin>>name;
    // cout<<"Hi "<<name<<",\n";
    // cout<<"Welcome to GfG";

    // int x,y;
    // cout<<"Enter two integer: ";
    // cin>>x>>y;
    // cout<<"Sum is "<<(x+y);

                        // getline() is used to read string with spaces
    string name;
    cout<<"Enter your name : \n";
    getline(cin,name);                // name -> Nukta Verma
    cout<<"Welcome "<<name;

    return 0;
}