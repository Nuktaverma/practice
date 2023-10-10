#include<iostream>
using namespace std;
int main()
{
    int n, ans = 1;
    cout<<"Enter number : ";
    cin >> n;
    while(n>0)
    {
        ans *= n;
        n--;
    }
    cout << ans;
    return 0;
}