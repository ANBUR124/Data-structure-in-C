#include<stdio.h>
#define N 100
int s1[N],s2[N];
int count=0;
void enqueue(int);
void dequeue();
void push1(int);
int pop1();
void push2(int);
int pop2();
void display();
int top1=-1;
int top2=-1;
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue()
{
    int i,a,b;
    if(top1==-1 && top2==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        for(i=0;i<count;i++)
        {
            a=pop1();
            push2(a);
        }
        b=pop2();
        printf("the popped element is %d",b);
        count--;
        for(i=0;i<count;i++)
        {
            a=pop2();
            push1(a);
        }
    }
}
void push1(int data)
{
    if(top1==N-1)
    {
        printf("\n Queue is full");
    }
    else
    {
        top1++;
        s1[top1]=data;
    }
}
int pop1()
{
    return s1[top1--];
}
void push2(int data)
{
    if(top2==N-1)
    {
        printf("queue is full");
    }
    else
    {
        top2++;
        s2[top2]=data;
    }
}
int pop2()
{
    return s2[top2--];
}
void display()
{
    int i;
    for(i=0;i<top1;i++)
    {
        printf("%d",s1[i]);
    }
}
void main()
{
    int ch,x;
    do
    {
        printf("\n1.ENQUEUE");
        printf("\n 2.DEQUEUE");
        printf("\n 3.DISPLAY");
        printf("\n Enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n enter the data to enqueued");
                scanf("%d",&x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("\n Invalid choice");
                break;
        }
    }while(ch<=3);
}