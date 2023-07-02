#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int);
void dequeue();
void dispaly();
void peekfirst();
void peeklast();
void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {       
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    struct node *temp;
    if(front==NULL && rear==NULL)
    {
        printf("\n queue is empty");
    }
    else if(front==rear)
    {
        temp=front;
        front=NULL;
        rear=NULL;
        free(temp);
    }
    else
    {
        printf("\n The dequeued element is %d",front->data);
        temp=front;
        front=temp->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    if(front==NULL && rear==NULL)
    {
        printf("\n queue is empty");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void peekfirst()
{
    if(front==NULL && rear==NULL)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n the first node of queue is %d",front->data);
    }
}
void peeklast()
{
    if(front==NULL && rear==NULL)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n the last node of queue is %d",rear->data);
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