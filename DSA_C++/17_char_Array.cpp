#include <iostream>
using namespace std;

int main(){

    char array[100] = "Bunny";

    int i = 0 ;

    while (array[i] != '\0') {                       //* '\0' = null character ... it denotes the ending of string
        
        cout<<array[i]<<endl;
        i++;
    }
    cout<<endl;

    //* Input and Output 

    char arr[100];          // First we declared size of array 
    cin>>arr;               // Then we taking input in array 
    cout<<arr<<endl;              // Finally printing whole array 

    cout <<endl << arr[3];         // Printing 4th letter of input, i.e 3rd position of array, coz index no is 0
    return 0;
}

//* Check wheater input is palindrome or not ?!     

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;         // n is size of an array

//     char array[n+1];            // n+1 coz last 1 is null character i.e \0 ..
//     cout << " Enter anything to check palindrome : ";
//     cin >> array;

//     bool check = 1; 

//     for(int i=0; i<n; i++){
//         if (array[i] != array[n-1-i]){                     // n-1 is last letter of string .. and -i coz to go in reverse order 
//             check = 0;
//             break;            
//         }
//     }

//     if (check == true){
//         cout<<"Entered input is palindrome !!";
//     }
//     else {
//         cout<<"Entered input is not palindrome !!";
//     }

//     return 0;
// }

//* Largest word in a sentence ..

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout << "Enter the size of array = ";
//     cin>> n;
//     cin.ignore();

//     char arr[n+1];  
//     cin.getline(arr,n);         //* getline is used to include spaces in a string ..
//     cin.ignore();               //* To ignore buffer created by getline 

//     int i=0;
//     int current_Length = 0, max_Length = 0;
//     int st=0, max_st=0;

//     while(1){

//         if (arr[i] == ' ' || arr[i] == '\0'){
            
//             if(current_Length > max_Length){
//                 max_Length = current_Length;
//                 max_st = st;
//             }
//             current_Length = 0;
//             st = i+1;
//         }

//         else{ 
//         current_Length++;
//         }

//         if(arr[i] == '\0'){
//             break;
//         }
//         i++;
//     }
    
//     cout<< max_Length << endl;
//     for(int i=0; i<max_Length; i++){
//         cout<< arr[i+max_st];
//     }
//     return 0;
// }