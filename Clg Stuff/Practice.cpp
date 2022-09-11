#include <iostream>
using namespace std;

int main(){

    int a[] = {10,30,40,20,80,5};

    //* Return the First Element
    cout<<a[0]<<endl;
    cout<<endl;                                  // Time complexity ==> O(1)


    //* Search for 80 roll no

    for(int i = 1; i<6; i++){                    // Time complexity ==> O(n)
        if(a[i] == 80){
            cout<<i<<endl;
        }
    }
    return 0;
}