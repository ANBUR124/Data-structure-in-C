#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create();
void display();
void reverse();
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
void create()
{
    int ch=1;
    while(ch)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the date for newnode");
        scanf("%d->",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do You want to continue");
        scanf("%d",&ch);
    }
}
void display()
{
    temp=head;
    if(temp==NULL)
    {
        printf("list is empty");
    }
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
  
}
void reverse()
{
    struct node *prevnode,*current,*nextnode;
    prevnode=0;
    nextnode=current=head;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        current->next=prevnode;
        prevnode=current;
        current=nextnode;
    }
    head=prevnode;
  return ;
    
}


int main()
{
    int choice;
    do
    {
        printf("\n1.CREATE LIST");
        printf("\n2.DISPLAY LIST");
        printf("\n3.REVERSE");
        printf("\n enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               create();
               break;
            case 2:
                display();
                break;
            case 3:
                printf("\n before reverse\n");
                display();
                reverse();
                printf("\nAfter reverse\n");
                display();
               
                break;
            case 4:
                exit(0);
                break;
        }
    }while(choice<=4);
}