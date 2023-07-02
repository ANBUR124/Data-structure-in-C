#include<stdio.h>
#define N 100
int front=-1;
int rear=-1;
int queue[N];
void enqueue(int);
void dequeue();
void dispaly();
void peekfirst();
void peeklast();
void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("Queue is overflow");
    }
    else if(front==-1 && rear==-1)
    {
        rear=front=0;
        queue[front]=queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }

}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("\n queue is underflow");
    }
    else if(front==rear)
    {
        printf("dequeued element is %d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("dequeued element is %d",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<rear+1;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void peekfirst()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("the first element of the queue is %d",queue[front]);
    }
}
void peeklast()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("the last elemnt of the queue is %d",queue[rear]);
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
        printf("\n 4.PEEK");
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
            case 4:
                peekfirst();
                break;
            case 5:
                peeklast();
                break;
            default:
                printf("\n Invalid choice");
                break;
        }
    }while(ch<=5);
}