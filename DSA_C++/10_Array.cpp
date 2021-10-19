#include <iostream>
#include <climits>          // new header file ,, check line no. 43 and 44
using namespace std;

//* array :- array is the datastructure, which is used to store list of variables of similar data type ..
//*          datatype arrayname[size];  .. general structure to initilize an array 

int main(){

    int arr[5]={10,20,30,40,50};
    cout << "the value of 4th array element is "<< arr[4] << endl;

    int n;                                    // taking input in arrays
    cout << "enter the size of array : ";
    cin >> n;                                // taking size of an array via inputs 

    int array[n];

    for (int i=0; i<n; i++){
        cin>> array[i];
    }

    for (int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}

//* write a program to find maximum and minimum of array inputs 

// int main (){

//     int n;
//     cout << "enter the size of an array : ";
//     cin >> n;

//     int array[n];

//     for (int i=0; i<n; i++){
//         cin>>array[i];
//     }

//     int minno = int_max;
//     int maxno = int_min;

//     for (int i=0; i<n; i++){
//         maxno= max(maxno,array[i]);             //* built in function which is used to find max of given variable
//         minno= min(minno,array[i]);
//    }
//     cout <<"max no is: "<< maxno <<endl<< "min no is: "<< minno <<endl;

//     return 0;
// }