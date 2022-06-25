#include <iostream>
#include <stack>
using namespace std;

//* Queue Implementation using Arrays

#define n 20                                    // Size of array is 20

class queue{
    int* arr;
    int front;                                  // Front will point to the first element of the queue 
    int back;                                   // back will point to the last element of the queue
    
    public:
    queue(){
        arr = new int[n];
        front = -1;                             // Initially front and back will point to none .. Therefore value is -1
        back = -1;
    }
    
    void push(int x){                           // In Queue, push is known as enqueue
        if(back == n-1){                        // This condition will check whether the size of array is greater than the elements to get added 
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;                                 // Now back element will point to the newly added element
        arr[back]=x;                            
        if(front==-1){                          // Initially we will increment front too when first element get added in the queue ..
            front++;
        }
    }
    
    void pop(){                                 // In Queue, pop is known as dequeue
        if(front == -1 || front>back){
            cout<<"No elements in queue"<<endl;
            return;
        }
        front++;                                // If we want to remove the elements from the queue we will simply increment the front, no need to delete the value of an array
    }                                           // bcoz the values present in between front and back pointer are only consider to be in queue ..

    int peek(){
        if(front == -1 || front>back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }
        return arr[front];                      // peek will simply return the value of the front element
    }

    bool empty(){
        if(front == -1 || front>back){
            return true;                        // If Queue is empty this will return true(1), else false(0)
        }
        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<endl;

    cout<<q.empty()<<endl;
    return 0;
}