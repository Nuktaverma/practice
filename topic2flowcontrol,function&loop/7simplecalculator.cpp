#include<iostream>
using namespace std;
int main()
{
    int op,x,y;
    cout<<"Enter operation(1 - Add, 2-Subtract, 3-Multiply): ";
    cin>>op;
    cout<<"Enter the values : ";
    cin>>x>>y;
    
    if(op==1){
        cout<<x+y;
    }
    else if(op==2){
        cout<<x-y;
    }
    else if(op==3){
        cout<<x*y;
    }
    else{
        cout<<"Invalid input";
    }

    return 0;
}