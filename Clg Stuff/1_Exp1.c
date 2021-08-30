#include<stdio.h>

typedef struct stack 
{
    int st[10];
    int top;
}s;
s s1;
void push(int x)
{
    if(s1.top==9)
    printf("Stack is full....");
    else
    {
        s1.top++;
        s1.st[s1.top]=x;
    }
}
void pop()
{
    if (s1.top==-1)
    printf("\t Stack is empty");
    else
    s1.top--;
}
void display()
{
    int i;
    if (s1.top==-1)
    printf("\tStack is empty");
    else
    {
        for(i=s1.top;i>=0;i--)
        printf("\n%d",s1.st[i]);
    }
}

void main()
{
    s1.top=-1;
    push(20);
    push(90);
    push(80);
    display();
    pop();
    display();
    
}