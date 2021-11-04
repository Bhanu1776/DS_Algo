#include <iostream>
using namespace std;

//* Searching key in 2D Arrays ..

int main(){

    int n,m;
    cin>> n>>m;

    int array[n][m];

    for (int i=0; i<n; i++){                
        for (int j=0; j<m; j++){            
            cin>>array[i][j];
        }
    }

    cout<<endl<< " Matrix is : "<<endl;

    for (int i=0; i<n; i++ ){               
        for (int j=0; j<m; j++){
            cout<< array[i][j]<<" ";
        }
        cout<<endl;
    }
  
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;

    bool flag = false;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            
            if (array[i][j]==key){
                cout<<i<<" "<<j<<" "<<endl;             // printing position of i and j 
                flag=true;
            }
        }
    }

    if(key){
           cout<<"Element is found!!"<<endl;
    }
    else{
        cout<<"Element is not found!!"<<endl;
    }
    return 0;
}

//* Spiral order matrix ..

// #include <iostream>
// using namespace std;

// int main(){

//     int n,m;
//     cout << "Enter the size of matrix nxm : ";
//     cin >> n >> m;

//     int array[n][m];

//     for (int i=0; i<n; i++){
//         for (int j=0; j<m; j++){
//             cin>>array[i][j];
//         }
//     }

//     // spiral order print 

//     int row_start = 0, row_end = n-1, col_start = 0, col_end = n-1;     // 0 and n-1 is the position of matrix 

//     while ( row_start <= row_end && col_start <= col_end){

//         // For row start ..

//         for (int col = col_start; col<=col_end; col++ ){
//             cout<<array[row_start][col]<< " ";
//         }
//             row_start++;

//         // For column end ..                    // start would always will be ++ and end will be --                           

//         for (int row = row_start; row<=row_end; row++){
//             cout <<array[row][col_end]<<" ";
//         }
//             col_end--;

//         // For row end .. 

//         for (int col= col_end; col<=col_start; col++){
//             cout <<array[row_end][col]<<" ";
//         }
//         row_end--;

//         // For col start ..

//         for (int row = row_end; row <= row_end; row++){
//             cout << array[row][col_start]<<" ";
//         }
//         col_start++;
//     }

//     return 0;
// }