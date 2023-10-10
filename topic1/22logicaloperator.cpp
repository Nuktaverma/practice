#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20 ; 
    bool res = (x>0 && x<100);            // instead of &&, "and" can also be written
    cout << res << "\n";
    res = (x>0 || x>y);            // instead of || or can be used
    cout << res << "\n";
    res = !res;                         // instead of ! not can be used
    cout << res << "\n";
    
    x=5;
    cout<<"Short Circuiting\n";
    res = (x>10)&&(x++);
    cout << res << "\n" << x << "\n";
    return 0;
}