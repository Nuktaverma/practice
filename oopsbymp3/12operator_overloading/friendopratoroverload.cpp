#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex(int r=0,int i=0)
        {
            real=r;
            img=i;    
        }

        friend Complex operator+(Complex c1, Complex c2);

        void display()
        {
            cout<<"The complex number is "<<real<<" + "<<img<<"i";
        }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}

int main()
{
    Complex c1(3,5);
    Complex c2(5,7);
    Complex c3;
    c3=c2+c1;
    c3.display();
    return 0;
}