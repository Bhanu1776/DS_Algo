#include <iostream>
using namespace std;

//* Linear Search in Arrays 

// int LinearSearch(int array[],int n, int key){
                                                    //* Time complexity will be O(n)..  
//     for (int i=0; i<n; i++){
//         if (array[i]==key){
//             return i;
//         }
//     }
//         return -1;
// }

// int main(){

//     int n;
//     cout<< "Enter the size of array : ";
//     cin>> n;

//     int array[n];

//     for (int i=0;i<n;i++){
//         cin>>array[i];
//     }

//     int key;
//     cout<< "Enter the key that u need to find in array: ";
//     cin >> key;

//     cout << LinearSearch(array,n,key);
//     return 0;
// }

//* Binary Search in Arrays 

int BinarySearch(int array[], int n, int key){              //* Binary search algo is better than Linear search algo

                                    //* Time Complexity will be O(log base 2 power n), Indirectly this algorithm will execute faster !!
    int s = 0;      // Start point 
    int e = n;      // End point 

    while(s<=e){
        int mid= (s+e)/2;       // Reaching to mid point of whole array

        if(array[mid]==key){
            return mid;
        }
        else if (array[mid]>key){       // if mid point is greater than key then,
            e=mid-1;                    // moving end point to mid-1
        }
        else{                           // if key is greater than mid point then,
            s=mid+1;                    // move start point to mid+1
        }                               
    }
    return -1;
}

int main (){

    int n;
    cout<< "Enter the size of array : ";
    cin>> n;

    int array[n];

    for (int i=0;i<n;i++){
        cin>>array[i];
    }

    int key;
    cout<< "Enter the key that u need to find in array: ";
    cin >> key;

    cout << BinarySearch(array,n,key);
    return 0;
}

//* For Better Understanding Refer this video :- https://www.youtube.com/watch?v=13ocRMSJy5M&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=19