#include<iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

int main()
{
    Point p[3];
    for(int i = 0; i < 3; i++)
    {
        p[i].x = i;
        p[i].y = i*10;
    }
    for(int i = 0; i < 3; i ++)
    {
        cout << p[i].x << ' '
             << p[i].y << '\n';
    }
    return 0;
}