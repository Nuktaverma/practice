#include<iostream>
using namespace std;
int main()
{                    //primitive datatype
    //integer type
    cout<<sizeof(short)<<"\n";        //2
    cout<<sizeof(int)<<"\n";          //4
    cout<<sizeof(char)<<"\n";          //1
    cout<<sizeof(long)<<"\n";             //4
    cout<<sizeof(long long)<<"\n";         //8
    cout<<sizeof(unsigned short)<<"\n";       //2
    cout<<sizeof(unsigned int)<<"\n";           //4
    cout<<sizeof(unsigned long)<<"\n";            //4
    cout<<sizeof(unsigned long long)<<"\n";        //8
    
    //character type
    cout<<sizeof(char)<<"\n";           //1
    cout<<sizeof(unsigned char)<<"\n";     //1

    //Floating type
    cout<<sizeof(float)<<"\n";    //4
    cout<<sizeof(double)<<"\n";        //8
    cout<<sizeof(long double)<<"\n";     //12

    //others
    cout<<sizeof(bool)<<"\n";  //1
   
    return 0;
}
