#include <iostream>
using namespace std;

//* Bubble sort :- Repeatedly swap two adjacent elements if they are in wrong order ..
//*                n-1 ittration before we get our sorted array 
int main(){
  
    int n;
    cout << "Enter the size of Array : " ;
    cin>> n;

    int array[n];

    for (int i=0; i<n; i++){
        cin >> array[i];
    }
 
    int counter = 1;
    while (counter<n){
        for (int i=0; i<n-counter; i++){

            if(array[i]>array[i+1]){

                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        counter++;
    }
   
    for (int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
   
    return 0;
}

//* To understand in a better way refer this video :- https://www.youtube.com/watch?v=xcPFUCh0jT0&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=21