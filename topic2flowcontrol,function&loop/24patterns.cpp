#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of times you want to print : ";
    cin>>n;               // n=5

    //PATTERN 1                  *****  
    // while(n--){
    //     cout<<"*";
    // }
    
    

    //PATTERN 2                   */n*/n*/n*/n*/n
    // while(n--){
    //     cout<<"*"<<endl;
    // }
   

    //PATTERN 3                  *****/n*****/n*****/n*****/n*****
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //pattern 4                             01234 \n 01234\n 01234\n 01234\n01234
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    //pattern 5                              012345 \n 012345\n 012345\n 012345 \n 012345
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=n;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    return 0;
}