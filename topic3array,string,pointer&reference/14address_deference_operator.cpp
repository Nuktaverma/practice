#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    cout << &x << '\n';
    cout << *(&x) << '\n';
    return 0;
}

/*0x61ff0c
10*/