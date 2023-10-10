#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,40,30,45};

    cout<<"using normal loop :)\n";
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    
    cout<<"using range based for loop :)\n";
    for(int x:arr)
        cout<<x<<" ";
    cout<<"\n";

    cout<<"Modifications during traversal\n";
    cout<<"\n";

    cout<<"Modifications using normal loop :)\n";
    for(int i=0;i<n;i++)
        arr[i]=arr[i]*2;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    
    cout<<"Modification using range based for loop :)\n";
    for(int&x : arr)
        x=x*2;
    for(int x : arr)
        cout<<x<<" ";

    return 0;
}