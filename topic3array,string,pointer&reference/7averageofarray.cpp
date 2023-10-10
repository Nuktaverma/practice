#include<iostream>
using namespace std;

double find_average(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum/double(n);
}


int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Average of array is : "<<find_average(arr,n);
    
    return 0;
}