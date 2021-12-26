#include <iostream>
using namespace std;

//* Sieve of Eratosthenes

void primeSeive(int n){

    int prime[100]={0};

    for(int i=2; i<=n; i++){        // We starting with 2, bcoz 2 is first prime number ..
        if(prime[i]==0){            // The numbers which are which are prime those whill get marked 
            for(int j=i*i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter any number: ";
    cin>>n; 

    primeSeive(n);
    return 0;
}



//* For better understanding Refer this video :- https://youtu.be/nDPo9hsDNvU