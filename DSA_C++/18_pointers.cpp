#include <iostream>
using namespace std;

//* Pointers :- Pointers are the variables that stores the address of other variables ..

void swap(int *c, int *d);

int main(){

    int a=10;               
    int* aptr=&a;               // aptr is the pointer varibale which stores the address of a variable .. int* is used to create a pointer varibale
                                // & is used to store the address of assigned variable 

    cout<<*aptr<<endl;          // *aptr is derefrencing ..

    *aptr= 20;                  //* With the help of pointers we can access the values and modify the values of variables too ..
    cout<<*aptr<<endl;        

    cout<<aptr<<endl;           // without using star we can print the address of specific variable ..
    cout<<&a<<endl<<endl;

    aptr++;
    cout<<aptr<<endl<<endl;           // This will print with +4 than orginal address, Its bcoz of integer consist of 4 bites .. therefore original address will increament with +4 ..

    //* Pointers in arrays 

    int arr[] = {10,20,30};
    cout<<*arr<<endl;             // *arr is an indexing pointer which pointing the 0th element of an array ..
    cout<<arr<<endl<<endl;              // Array itsself pointer in cpp .. This will return the address of 0th element of an array

    int* ptr = arr;               //* Here we didn't took &arr, boz as we mentioned in line 27 arr itself a pointer ..

    for (int i=0 ; i<3;i++){
        cout<<*ptr<<endl<<endl;
        ptr++;
    }

    //* Pointers to pointers 

    int b =10;
    int* bptr;
    bptr = &b;

    int** ppb = &bptr;      // Double Pointers, Here one pointer variable is storing the address of another pointer variable ..

    cout<<*ppb<<endl;       // Derefrencing ..This will give the value of bptr.. i.e address of b variable
    cout<<**ppb<<endl<<endl;      //* Double Derefrencing ..


    //* Call by reference 

    int c = 10;
    int d = 20;

    swap(&c,&d);            // Sending the address of c and d to swap function ..
    cout<<a<<" "<<b<<endl;


    return 0;
}

void swap(int *c, int *d){      // Accessing Global variables in pointers 
    int temp;
    
    temp=*c;
    *c=*d;
    *d=temp;
}