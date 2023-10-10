#include <iostream>
using namespace std;
int main()
{   
    cout << "Prefixes in Integer Literals\n" ; 
	{
    	int a = 20 ;  //Decimal
    	int b = 0x1A; //Hexadecimal
    	int c = 016;  //Octal
    	int d = 0b11; //Binary
    	cout << a << "\n"
    	     << b << "\n"
    	     << c << "\n"
    	     << d << "\n";
	}
	cout << "Suffixes in Integer Literals\n";
	{
	    int a = 124;
	    unsigned b = 124u;
	    long int c = 124L;
	    long long int d = 124LL;
	    cout << a << "\n"
	         << b << "\n"
	         << c << "\n"
	         << d << "\n";
	}
	cout << "Floating Point Literals\n";
	{
	    float  a = 10.5f;  
	    double b = 10.515;
	    float  c = 2.1e15f;    //2.1 *  10^15
	    double d = 200.1e-60;    //200.1 * 10^-80 = 2.001 * 10^-78
	    double f = 0x1A.1p2;     // 26.0625 * 2^2 =104.25       when we use 0x we use p instead of e for power
	    cout << a << "\n"
    	     << b << "\n"
    	     << c << "\n"
    	     << d << "\n"
    	     << f << "\n"; 
	}
	cout << "Character and String Literals\n";
	{
	    char c = 'g';
	    const char *s1 = "gfg";
	    string s2 = "courses";
	    cout << c  << "\n"
	         << s1 << "\n"
	         << s2 << "\n";
	}
	return 0;
}