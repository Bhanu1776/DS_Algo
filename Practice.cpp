// #include <iostream>
// using namespace std;

// //* reverse of an array 

// int main(){

//     int n;
//     cout<<"enter the no of elements u want in an array: ";
//     cin >> n;

//     int arr[n];

//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i = n-1; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// //* find the maximum and minimum element in an array
// // another easiest way by using built in func, done in 10_array.cpp

// int main(){

//     int n;
//     cout<<"enter the value of n : ";
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     // for sorting == Selection sort ins used in this program
//     for(int i = 0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     int max = arr[n-1];
//     int min = arr[0];

//     cout<<"the max is:"<<max<<endl<<"the min is:"<<min<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

//* Find 'kth' min and max element of an array 

// int main(){

//     int arr[5] = {8,4,7,2,1};

//     int k;
//     cout<<"Enter the kth element: ";
//     cin>>k;
    
//     for(int i = 0; i<5; i++){
//         for(int j=i+1; j<=5; j++){
//             if(arr[j]<arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     for (int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;
//     cout<<arr[k]<<endl;

//     return 0;
// }

//* Spirally traversing a matrix

#include <iostream>
using namespace std;

int main(){

    int r = 3;
    int c = 4;
    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    

    return 0;
}
***
