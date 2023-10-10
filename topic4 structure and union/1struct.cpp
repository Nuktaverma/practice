//code1

// #include<iostream>
// using namespace std;

// typedef struct Point
// {
//   int x;
//   int y;
// }P;

// int main()
// {
//     P p;
//     p.x = 10;
//     p.y = 20;
//     cout << p.x << " "
//          << p.y;
//     return 0;
// }



//code 2

#include<iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string address;
};

int main()
{
    Student s = {101, "ABC", "xyz"};
    cout << s.rollNo << " " 
         << s.name   << " "
         << s.address<< "\n";
    return 0;
}