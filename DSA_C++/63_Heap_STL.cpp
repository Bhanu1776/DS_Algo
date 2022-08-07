#include <iostream>
#include <queue>                                // Imp to use priorityQueue in cpp
using namespace std;

//* PriorityQueue is the function present in STL(Standard template library of C++)

int main(){

    //* MaxHeap is default in priorityQueue
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Element at top: "<< pq.top()<<endl;

    pq.pop();
    cout<<"Element at top: "<< pq.top()<<endl;

    cout<<"Size is: "<< pq.size()<<endl;
    
    if(pq.empty()){
        cout<<"Pq is empty"<<endl;
    }
    else{
        cout<<"Pq is not empty!"<<endl;
    }

    //* MinHeap using priorityQueue
    priority_queue<int, vector<int>, greater<int> > minHeap;            // Do note syntax!!

    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);

    cout<<"Element at top: "<< minHeap.top()<<endl;

    minHeap.pop();
    cout<<"Element at top: "<< minHeap.top()<<endl;

    cout<<"Size is: "<< minHeap.size()<<endl;
    
    if(minHeap.empty()){
        cout<<"Pq is empty"<<endl;
    }
    else{
        cout<<"Pq is not empty!"<<endl;
    }
    return 0;
}

//* For more functions refer ==> https://en.cppreference.com/w/cpp/container/priority_queue