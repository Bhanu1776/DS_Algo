#include <iostream>
using namespace std;

//* Insertion sort :- Insert an element from unsorted array to its correct position in sorted array ..

int main(){

    int n;
    cout << "Enter the size of Array : " ;
    cin>> n;

    int array[n];

    for (int i=0; i<n; i++){
        cin >> array[i];
    }
    
    for (int i=1; i<n; i++){        // i=1 coz we had to start comparing from 2nd element ..

        int current = array[i];     // current value 

        int j=i-1;                  // jumping to previous number 
        while (array[j]>current && j>=0){

                array[j+1] = array[j];
                j--;
        }
        array[j+1]= current;
    }


    for (int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}

//* To understand in a better way refer this video :- https://www.youtube.com/watch?v=3GC83dh4cf0&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=22