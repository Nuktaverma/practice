// local variable
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x=10;
//     cout<<x;
//     return 0;
// }

// Global variable (variable declared outside main function)
// #include<iostream>
// using namespace std;
// int x=10;
// int main()
// {
//     cout<<x;
//     return 0;
// }

// IF NOT INITIALIZED
// Local variable
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<x;     //undefined
//     return 0;
// }

// Global variable
// #include<iostream>
// using namespace std;
// int x;
// int main()
// {
//     cout<<x;          //0
//     return 0;
// }

// Global variable can be defined after main function by using "extern" before main function

// #include<iostream>
// using namespace std;
// extern int x;
// int main()
// {
//     cout<<x;             //10
//     return 0;
// }
// int x=10;

// scope

// #include<iostream>
// using namespace std;
// int x=20;
// int main()
// {
//     int x=10;
//     cout<<x;         // 10                    // Local variable accessed over global variable
//     return 0;
// }

// scope works from inner to outer denoted by curly braces{ one scope{another scope but will be treated first}}

// #include <iostream>
// using namespace std;
// int x = 20;
// int main()
// {
//     int x = 10;
//     {
//         int x = 30;    //30
//         cout << x;
//     }
//     return 0;
// }


// We can not have two variables with same name in same scope it can be in different one 
#include<iostream>
using namespace std;
int x=20;
int main()
{
    {
        int x=10;
        int x=20;
        cout<<x;    //compiler error

    }
    return 0;
}