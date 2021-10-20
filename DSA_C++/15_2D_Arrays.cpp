#include <iostream>
using namespace std;

//* 2D Array === Matrix 

int main(){

    int n,m;
    cin>> n>>m;

    int array[n][m];

    for (int i=0; i<n; i++){                // Taking input  .. i loop is used to take no of rows and columns
        for (int j=0; j<m; j++){                           //.. j loop is used to insert value under rows and columns 
            cin>>array[i][j];
        }
    }

    cout<<endl<< " Matrix is : "<<endl;

    for (int i=0; i<n; i++ ){               // Printing output
        for (int j=0; j<m; j++){
            cout<< array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}