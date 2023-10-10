#include<iostream>
using namespace std;
int main(){
    int arr[5]={50,40,10,30,20};

    //we can initialize without giving size even
    int a[]={10,25,32,24,26};

    //size of array can be variable also
    int n=5;
    int b[n]; 

    //if we create an array of higher value and initialize it with less values it will automaticlly assign the leftover with 0
    int c[5]={10,20};

    //if we want to make every element 0 we can do like this :)
    int d[5]={0};

    // ALTERNATE WAY to initialize an array
    int e1[]{10,20,30};
    int e2[5]{10,20,30,40,50};
    int e3[5]{10,20};
    return 0;
}

