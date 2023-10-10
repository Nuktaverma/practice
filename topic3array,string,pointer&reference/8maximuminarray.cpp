#include<iostream>
using namespace std;

int find_max(int arr[], int n)
{
    int ans=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>ans)
            ans=arr[i];
    }
    return ans;
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

    cout<<"Maximum in array is : "<<find_max(arr,n);
    return 0;
}