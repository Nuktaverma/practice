#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};

    //sizeof operator prints the size of array as one element uses 4 bytes so it will print 4*5=20 in this case
    cout<<sizeof(arr)<<"\n";                
    
    //if we want to get the number if elements given in an array 
    cout<<sizeof(arr)/sizeof(arr[0]);

    

    return 0;
}