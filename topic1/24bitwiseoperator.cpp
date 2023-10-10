#include<iostream>
using namespace std;
int main()
{
    int x = 3, y = 6;
	cout<<(x & y)<<endl;    // Bitwise and
	cout<<(x | y)<<endl;     // bitwise or
	cout<<(x ^ y)<<endl;     //bitwise XOR

    int z = 1;
	cout<<(~ z)<<endl;            //Bitwise not (signed)
	z = 5;
	cout<<(~ z)<<endl;
    
    unsigned int a = 1;
	cout<<(~ a)<<endl;           //Bitwise not (unsigned)
	a = 5;
	cout<<(~ a)<<endl;

    int b = 33;
	cout<<(b >> 1)<<endl;               //Right shift
	cout<<(b >> 2)<<endl;
	int c = 4;
	int d = b >> c;
	cout << d << endl;
    
    int e = 3;
	cout<<(e << 1)<<endl;            //left shift
	cout<<(e << 2)<<endl;
	int f = 4;
	int g = e << f;
	cout << g << endl;

    return 0;
}