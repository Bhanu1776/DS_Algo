// postfix expression
#include <stdio.h>
#include <ctype.h>

int st[100];
int top=-1;

void push(int x)
{
    top++;
    st[top]=x;
}

int pop()
{
    return (st[top--]);
}

void main(){
char post[100],ch;
int i,n1,n2;
printf("Please enter correct Postfix Expression: \n");
scanf("%s",&post);
i=0;
ch=post[i];

while(ch!='\0'){
if(isalnum(ch))
push(toascii(ch)-48);
else
{
    n1=pop();
    n2=pop();
    switch(ch){
        case '+':
        push(n1+n2);
        break;
        case '-':
        push(n1-n2);
        break;
        case '*':
        push(n1*n2);
        break;
        default:
        printf("Invaid");
    }
}
i++;
ch=post[i];
}
printf("\n The result of %s is %d",post ,st[top]);
}