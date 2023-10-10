#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"Example of fixed i.e no power or 'e'\n";
    double x=1.23,y=1122456.453;
    cout<<std::fixed;
    cout<<x<<"\n"
        <<y<<"\n";
    cout<<std::setprecision(2);
    cout<<x<<"\n"
        <<y<<"\n";
    double z=1.2e+7;
    cout<<z<<"\n";


    cout<<"Example of scientific i.e uses 'e'\n";
    cout<<std::scientific;
    cout<<x<<"\n"
        <<y<<"\n";
    cout<<std::setprecision(2);
    cout<<x<<"\n"
        <<y<<"\n";
    cout<<z<<"\n";                                                                   

    return 0;
}