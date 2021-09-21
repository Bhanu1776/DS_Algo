#include <stdio.h>

//queue implementation

typedef struct queue
{
  int a[10];
  int front;
  int rear;

}que;

que q;
void enq(int x){
  if(q.rear==9){
    printf("queue overflow");
  }
  else{
    if(q.front==-1)
     q.rear=0;

     q.rear++;
     q.a[q.rear]=x;
  }
}
void dque(){
  if(q.front==-1){
    printf("queue is empty");
  }
  else{
    q.front++;

  }
}
void display (){
  if(q.front==-1){
    printf("queue is empty");

  }
  else{
    for(int i=q.front;i<=q.rear;i++){
      printf("%d",q.a[i]);
    }
  }
}

int main(void) {
  printf("Hello World\n");
  q.front=0;
  q.rear=-1;
  enq(10);
  enq(20);
  enq(30);
  display();
  printf("---------");
  dque();
  display();
  return 0;
}