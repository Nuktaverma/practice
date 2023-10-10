#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter number whose table you want to find : ";
    cin >> n;
    cout << "Enter till we want to find table : ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cout << n * i << '\n';
    }
    return 0;
}