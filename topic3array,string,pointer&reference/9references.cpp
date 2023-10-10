                                  // REFERENCES
/*When a variable is declared as a reference, it becomes an alternative name for an existing variable. 
  A variable can be declared as a reference by putting ‘&’ in the declaration.*/


// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=10;
//     int &y=x;
//     cout<<y<<" ";
//     x=x+5;
//     cout<<y<<" ";
//     y=y+5;
//     cout<<x<<" ";
//     return 0;
// }

                    //APPLICATIONS
/* 1. Modify the passed parameters in a function: 

If a function receives a reference to a variable, it can modify the value of the variable. 
For example, the following program variables are swapped using references.*/

// #include <iostream>
// using namespace std;

// void swap(int& first, int& second)
// {
// 	int temp = first;
// 	first = second;
// 	second = temp;
// }

// int main()
// {
// 	int a = 2, b = 3;
// 	swap(a, b);
// 	cout << a << " " << b;
// 	return 0;
// }


/*2. Avoiding a copy of large structures: 

Imagine a function that has to receive a large object. 
If we pass it without reference, a new copy of it is created which causes wastage of CPU time and memory. 
We can use references to avoid this.*/

// struct Student {
// 	string name;
// 	string address;
// 	int rollNo;
// }

// // If we remove & in below function, a new
// // copy of the student object is created.
// // We use const to avoid accidental updates                                       //example hai execute mat krna
// // in the function as the purpose of the function
// // is to print s only.
// void print(const Student &s)
// {
// 	cout << s.name << " " << s.address << " " << s.rollNo
// 		<< '\n';
// }





// #include<iostream>
// #include<vector>
// using namespace std;

// void Print(const vector<int>&v){
//     for(auto x:v)
//         cout<<x<<" ";
// }

// int main(){
//     vector<int>v;
//     for(int i=0;i<1000;i++)
//         v.push_back(i);
    
//     Print(v);
//     return 0;
// }




/*3. Modifications in for each loop*/

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int>vect{10,20,30,40};
//     for(auto &x:vect)
//         x=x+5;
//     for(auto x:vect)
//         cout<<x<<" ";
    
//     return 0;
// }



/* For Each Loop to avoid the copy of objects: 
  We can use references in each loop to avoid a copy of individual objects when objects are large*/


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	vector<string> vect{ "geeksforgeeks practice",
// 						"geeksforgeeks write",
// 						"geeksforgeeks ide" };

// 	// We avoid copy of the whole string
// 	// object by using reference.
// 	for (const auto& x : vect) 
//     {
// 		cout << x << '\n';
// 	}

// 	return 0;
// }




                             //QUESTIONS

//question 1 

// #include<iostream>
// using namespace std;

// int main(){
//     int x=10,z=20;
//     int &y=x;
//     y=z;
//     y=y+5;
//     cout<<x<<" "<<y<<" "<<z;
//     return 0;
// }



//question 2

// #include<iostream>
// using namespace std;

// int &fun()
// {
//     static int x=10;
//     return x;
// }

// int main()
// {
//     int &z=fun();
//     cout<<fun()<<" ";
//     z=30;
//     cout<<fun();
//     return 0;
// }