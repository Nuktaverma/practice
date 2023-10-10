//Question 1

// #include<iostream>
// using namespace std;

// int main()
// {
//     int x = 10, y = 20;
//     int &z = x;
//     z = y;
//     z += 5;
//     cout << x << ' ' << y << ' ' << z;                         // 25 20 25 
//     return 0;
// }


//Question 2

// #include<iostream>
// using namespace std;

// int &fun()
// {
//     static int x = 10;
//     return x;
// }
// int main()
// {
//     int &y = fun();
//     y = 20;
//     cout << fun();                           //20
//     return 0;
// }


//Question 3


// #include<iostream>
// using namespace std;

// int main()
// {
//     string s1 = "GFG ", s2 = "Courses";
//     string &&s3 = s1 + s2;
//     s3 = "Welcome to " + s3;
//     cout << s3 << endl;                                //Welcome to GFG Courses
//     return 0;
// }