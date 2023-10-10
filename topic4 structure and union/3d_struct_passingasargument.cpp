#include<iostream>
using namespace std;

struct Student
{
  int roll;
  int age;
  string name;
  string address;
};

void print(const Student &s)
{
   cout << s.roll << ' '
        << s.name << ' '
        << s.age  << ' '
        << s.address;
}

int main()
{
    Student s = {2323, 38, "Sandeep", "GFG"};
    print(s);
    return 0;
}