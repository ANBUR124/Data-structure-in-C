#include<stdlib.h>
#include<stdio.h>
void create();
void display();
void reverse();
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*tail,*newnode,*temp;
//create a doubly linked list
void create()
{
    int ch=1;
    //head=NULL;
    while(ch==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data ");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
           
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
           // printf("%d",tail->data);
        }
        printf("\n do you want to continue");
        scanf("%d",&ch);
    }
    return ;

}
//Displaying the list
void display()
{
    
    temp=head;
    if(temp==NULL)
    {
        printf("empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
   
}
void reverse()
{
    struct node *nextnode;
    temp=head;
    while(temp!=NULL)
    {
        nextnode=temp->next;
        temp->next=temp->prev;
        temp->prev=nextnode;
        temp=nextnode;
    }
    temp=head;
    head=tail;
    tail=temp;
}
int main()
{
    int op;
    do
    {
        printf("\n1.CREATE");
        printf("\n2.DISPLAY");
        printf("\n3.REVERSE");
        printf("\n4.EXIT");
        printf("\n enter the choice");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("\nBefore REVERSING  ");
                display();
                reverse();
                printf("After REVERSING  ");
                display();
                break;
            case 4:
                exit(0);
                break;
        }
    }while(op<=4);
}