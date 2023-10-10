
 #include<iostream>
 using namespace std;
 int main()
 {
    /*cout<<"Implicit conversion"<<"\n";
    int x = 10;
    char y = 'A';
    cout << (x+y) << '\n';
    float z = 5.5;
    cout << (x+z) << '\n';
    bool b = z;
    cout << b << '\n';*/

    /*cout<<"Explicit conversion"<<"\n";
    int x = 15, y = 2;
    double z1 = x/y;
    cout << z1 << '\n';
    double z2 = double(x)/y;
    cout << z2 << '\n';*/

    cout<<"C++ style explicit conversion"<<"\n";
    int x=15,y=2;
    double z=static_cast<double>(x)/y;
    cout<<z;
    return 0;
 }