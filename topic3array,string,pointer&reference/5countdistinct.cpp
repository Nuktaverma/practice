// #include<iostream>
// using namespace std;

// int countDistinct(int a[], int n)
// {
//     int count = 0;
//     bool isDistinct = true;
//     for(int i = 0; i < n; i++)
//     {
//         isDistinct = true;
//         for(int j = i-1; j >= 0; j--)
//         {
//             if(a[i]==a[j])
//             {
//                 isDistinct = false;
//                 break;
//             }
//         }
//         if(isDistinct==true)
//         {
//             count ++ ;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int n; 
//     cout<<"Enter the size of array : ";
//     cin >> n;
//     cout<<"Enter the elements of array : ";
//     int a[n];
//     for(int i = 0; i < n; i ++)
//     {
//         cin >> a[i] ; 
//     }
//     cout << countDistinct(a,n);
//     return 0;
// }





// efficient method

// #include<iostream>
// #include <algorithm>
// using namespace std;

// int countDistinct(int arr[], int n)
// {
//     // First sort the array so that all
//     // occurrences become consecutive
//     sort(arr, arr + n);
 
//     // Traverse the sorted array
//     int res = 0;
//     for (int i = 0; i < n; i++) {
 
//         // Move the index ahead while
//         // there are duplicates
//         while (i < n - 1 && arr[i] == arr[i + 1])
//             i++;
 
//         res++;
//     }
 
//     return res;
// }
 
// // Driver program to test above function
// int main()
// {
//     int arr[] = { 6, 10, 5, 4, 9, 120, 4, 6, 10 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << countDistinct(arr, n);
//     return 0;
// }