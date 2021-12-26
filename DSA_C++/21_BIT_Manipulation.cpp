#include <iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int clearBit(int n, int pos){
    int mask = ~(1<<pos);           //* '~' is compliments which is used to reverse number in every position 
    return (n & mask);
}

int updateBit(int n, int pos, int valueToSet){
    int mask = ~(1<<pos);
    n = n & mask;
    return n | (valueToSet<<pos);
}

int main(){

    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,3)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5, 1, 1)<<endl;
    return 0;
}