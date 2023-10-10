// #include<iostream>
// using namespace std;
// int main()
// {
//     const int x=10;
//    // x=x+1;        //as x is constant so cant be modified will give compiler error   
//     cout<<x;
//     return 0;
// }


// A REAL LIFE EXAMPLE USING "const"
#include<iostream>
using namespace std;
const double PI=3.14;
int main()
{
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area is "<<PI*r*r;
    return 0;
}