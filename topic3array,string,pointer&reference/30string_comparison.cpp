//example 1

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str = "geeksforgeeks";
    
//     int res = str.find("eek");
//     if(res == string::npos)
//         cout << "Not Present\n";
//     else
//         cout << "First Occurence at index " << res;
    
//     return 0;
// }



//example 2

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "bcd";
    
    if(s1 == s2)
        cout << "Same";
    else if(s1 < s2)
        cout << "Smaller";                   //Smaller
    else
        cout << "Greater";
    
    return 0;
}