#include<iostream>
using namespace std;

struct S1
{
    char c1;
    double d1;
    char c2;
}__attribute__((packed));

struct S2
{
    char c1;
    char c2;
    double d1;
}__attribute__((packed));

struct S3
{
    double d1;
    char c1;
    char c2;
}__attribute__((packed));

int main()
{
    cout << sizeof(S1) << ' '
         << sizeof(S2) << ' '
         << sizeof(S3);
    return 0;
}