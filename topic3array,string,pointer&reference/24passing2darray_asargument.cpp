/*There are different methods of passing 2d array as argument to a function */


//Example 1

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h> 
// #include <climits>
// #include <deque>
// using namespace std;

// void print(int mat[3][2])
// {
// 	for(int i = 0; i < 3; i++)
// 	{
// 		for(int	j = 0; j < 2; j++)
// 			cout << mat[i][j] << " ";
// 	}
// }

// int main()
// {	
// 	int m = 3, n = 2;

// 	int mat[3][2] = {{10, 20},
// 					 {30, 40},
// 					 {50, 60}};

// 	print(mat);                                    //10 20 30 40 50 60

// 	return 0;
// }




//Example 2

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h> 
// #include <climits>
// #include <deque>
// using namespace std;

// void print(int mat[][2], int m)
// {
// 	for(int i = 0; i < m; i++)
// 	{
// 		for(int	j = 0; j < 2; j++)
// 			cout << mat[i][j] << " ";
// 	}
// }

// int main()
// {	

// 	int mat[3][2] = {{10, 20},
// 					 {30, 40},
// 					 {50, 60}};

// 	print(mat, 3);                                     // 10 20 30 40 50 60

// 	return 0;
// }



//Example 3

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h> 
// #include <climits>
// #include <deque>
// using namespace std;

// const int R = 3;
// const int C = 2;

// void print(int mat[R][C])
// {
// 	for(int i = 0; i < R; i++)
// 	{
// 		for(int	j = 0; j < C; j++)
// 			cout << mat[i][j] << " ";
// 	}
// }

// int main()
// {	

// 	int mat[R][C] = {{10, 20},
// 					 {30, 40},
// 					 {50, 60}};

// 	print(mat);                          //10 20 30 40 50 60

// 	return 0;
// }



//Example 4

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h> 
// #include <climits>
// #include <deque>
// using namespace std;

// void print(int **arr, int m, int n)
// {
// 	for(int i = 0; i < m; i++)
// 	{
// 		for(int	j = 0; j < n; j++)
// 			cout << arr[i][j] << " ";
// 	}
// }

// int main()
// {	
// 	int m = 3, n = 2;

// 	int *arr[m];

// 	for(int i = 0; i < m; i++)
// 	{
// 		arr[i] = new int[n];

// 		for(int j = 0; j < n; j++)
// 		{
// 			arr[i][j] = i;

// 			cout << arr[i][j] << " ";                    // 0 0 1 1 2 2 
// 		}
// 	}


// 	return 0;
// }



//Example 5

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h> 
// #include <climits>
// #include <deque>
// using namespace std;

// void print(vector<int> arr[], int m)
// {
// 	for(int i = 0; i < m; i++)
// 	{
// 		for(int	j = 0; j < arr[i].size(); j++)
// 			cout << arr[i][j] << " ";
// 	}
// }

// int main()
// {	
// 	int m = 3, n = 2;

// 	vector<int> arr[m];

// 	for(int i = 0; i < m; i++)
// 	{
// 		for(int j = 0; j < n; j++)
// 		{
// 			arr[i].push_back(i);
// 		}
// 	}

// 	print(arr, m);                                // 0 0 1 1 2 2 

// 	return 0;
// }



//Example 6

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h> 
// #include <climits>
// #include <deque>
// using namespace std;

// void print(vector<vector<int>> arr)
// {
// 	for(int i = 0; i < arr.size(); i++)
// 	{
// 		for(int	j = 0; j < arr[i].size(); j++)
// 			cout << arr[i][j] << " ";
// 	}
// }

// int main()
// {	
// 	int m = 3, n = 2;

// 	vector<vector<int>> arr;

// 	for(int i = 0; i < m; i++)
// 	{
// 		vector<int> v;

// 		for(int j = 0; j < n; j++)
// 		{
// 			v.push_back(i);
// 		}

// 		arr.push_back(v);
// 	}

// 	print(arr);                                   // 0 0 1 1 2 2 

// 	return 0;
// }


