#include <iostream>
using namespace std;

//* Selection Sorting = Find the minimum element in unsortted array and swap it with element at beginning ..

int main(){

    int n;
    cout << "Enter the size of Array : " ;
    cin>> n;

    int array[n];

    for (int i=0; i<n; i++){
        cin >> array[i];
    }
                                    //! Understand Carefully 
    for (int i=0; i<n-1;i++){     // This loop will run from first element to last second element 
        for(int j=i+1; j<n; j++){  // This loop witll run from second element to last element 
            
            if (array[j]<array[i]){    // For swapping elements 

                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}