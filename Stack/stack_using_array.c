#include<stdio.h>
#define N 100
int stack[N];
int top=-1;
void push();
void pop();
void display();
void peek();
void push()
{
    int x;
    printf("enter the element");
    scanf("%d",&x);
    if(top>N-1)
    {
        printf("\n stack is overflow");
    }
    else
    {
       top++;
       stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Stack is underflow");
    }
    else
    {
        item=stack[top];
        top--;
        printf("the popped element is %d",item);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
}
void peek()
{
    if(top==-1)
    {
        printf("\nStack is underflow");
    }
    else
    {
        printf("\nthe topmost element is %d",stack[top]);
    }

}
void main()
{
    int ch;
    do
    {
        printf("\n1.PUSH");
        printf("\n 2.POP");
        printf("\n 3.DISPLAY");
        printf("\n 4.PEEK");
        printf("\n Enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            default:
                printf("\n Invalid choice");
                break;
        }
    }while(ch<=4);
}