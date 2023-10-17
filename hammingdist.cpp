#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first integer number: ";
    cin >> a;
    cout << "Enter second integer number: ";
    cin >> b;
    vector<bool> v1;
    while (a > 0)
    {
        int t = a % 2;
        v1.push_back(t);
        a /= 2;
    }
    for (int i = v1.size() - 1; i >= 0; i--)
    {
        cout << v1[i];
    }
    cout << "\n";
    vector<bool> v2;
    while (b > 0)
    {
        int s = b % 2;
        v2.push_back(s);
        b /= 2;
    }
    for (int i = v2.size() - 1; i >= 0; i--)
        cout << v2[i];
    return 0;
}