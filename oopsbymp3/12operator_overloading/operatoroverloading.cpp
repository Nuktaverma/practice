#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;
    
    public:
        Complex(int r=0,int i=0)
        {
            real=r;
            imag=i;
        }
        // Complex add(Complex x)
        Complex operator +(Complex x)
        {
            Complex temp;
            temp.real=real+x.real;
            temp.imag=imag+x.imag;
            return temp;
        }
        int display()
        {
            cout<<"Answer is "<<real<<" + "<<imag<<"i";
        }
};

int main()
{
    Complex C1(3,7);
    Complex C2(5,4);
    Complex C3;
    // C3=C1.add(C2);
    C3=C1+C2;
    C3.display();
    return 0;
}
