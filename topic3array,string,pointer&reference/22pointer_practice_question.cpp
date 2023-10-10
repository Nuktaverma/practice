//Question 1

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[] = {1,2,3};
//     int *p = a;
//     cout << sizeof(a) << " " << sizeof(p) << "\n";                    //  12 4
//     return 0;
// }



//Question 2

// #include<iostream>
// using namespace std;

// int main()
// {
//     char a[] = {'g','f','g'};
//     char *p = a;
//     cout << sizeof(a) << " " << sizeof(p) << "\n";                 // 3 4
//     return 0;
// }



//Question 3

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[] = {10, 20};
//     int *p = a;
//     ++*p;
//     cout << a[0] << " "                                        
//          << a[1] << "\n"                                       //11 20
//          << *p;                                                //11
//     return 0;
// }



//Question 4

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[] = {10, 20};
//     int *p = a;
//     *p++;
//     cout << a[0] << " " 
//          << a[1] << "\n"                                          //10 20
//          << *p;                                                   //20
//     return 0;
// }



//Question 5

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[] = {10, 20};
//     int *p = a;
//     *++p;
//     cout << a[0] << " " 
//          << a[1] << "\n"                                      //10 20 
//          << *p;                                               //20
//     return 0;
// }