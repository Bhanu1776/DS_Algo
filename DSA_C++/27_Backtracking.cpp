#include <iostream>
using namespace std;

//* Rat in a maze 

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

bool isSafe(int** arr, int x, int y, int n){        // arr is dynamic, x and y is an axis to move and n is array size ..
                                                    // x right and y goes down .. no up and left 
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int** solArr){

    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solArr)){          // For right
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solArr)){          // For down
            return true;
        }
        solArr[x][y]=0;             // If we get false .. like if we can't go left and right .. then we'll backoff 
                                    // And this i backtracking ..
        return false;
    }
    return false;
}

int main(){

    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int** arr= new int*[n];         // A way to create a dynamic array 
    for(int i=0; i<n; i++){
        arr[i]= new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int** solArr = new int*[n];
    for(int i=0; i<n; i++){
        solArr[i]= new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j]=0;
        }
    }

    if(ratinMaze(arr,0,0,n,solArr)){
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}