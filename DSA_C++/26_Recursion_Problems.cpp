#include <iostream>
using namespace std;

//* Write a program to check if an array is sorted or not 

// bool sorted(int arr[], int n){

//     if(n==1){
//         return true;
//     }

//     bool restArray = sorted(arr+1,n-1);
//     return (arr[0]<arr[1] && restArray);
// }

// int main(){

//     int arr[] = {1,6,3,4,5};        // Answer will be false bcoz the array is unsorted ..
//     cout<<sorted(arr,5)<<endl;

//     return 0;
// }

//* Print numbers till n by decreasing and increasing order ..

// void dec(int n){

//     if(n==1){
//         cout<<"1"<<endl;        // TO understand this program, better to comment this line and annalyse the output ..
//         return;
//     }

//     dec(n-1);
//     cout<<n<<endl;
// }

// void inc(int n){

//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
    
//     cout<<n<<endl;
//     inc(n-1);
// }

// int main(){

//     int n;
//     cout<<"Enter any number: ";
//     cin>>n;

//     cout<<endl;
//     inc(n);
//     cout<<endl;
//     dec(n);
// }
