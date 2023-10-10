#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"Default printing format\n";
    double x=1.2300;
    cout<<x<<"\n";
    double y=1567.56732;
    cout<<y<<"\n";
    double z=1244567.45;
    cout<<z<<"\n";
    double w=124456.67;
    cout<<w<<"\n";
    double u=123e+2;
    cout<<u<<"\n";

    cout<<"Manipulating defalt format using setprecision(), showpoint(), showpos,uppercase\n";
    cout<<std::setprecision(4);
    double a=15.5683,b=34267.1;
    cout<<a<<" "<<b<<"\n";
    double c=1.23;
    cout<<std::showpoint<<c<<"\n";
    cout<<std::showpos<<c<<"\n";
    cout<<std::uppercase<<b<<"\n";

    return 0;
}