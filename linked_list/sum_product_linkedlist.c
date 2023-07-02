#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create();
void display();
void sum();
void product();
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
void sum()
{
    int sum=0;
    temp=head;
    if(temp==NULL)
    {
        printf("empty linked list");
    }
    else
    {
        while(temp!=0)
        {
            sum=sum+temp->data;
            temp=temp->next;
        }
        printf("the sum of the elements in the linked list are %d",sum);

    }
}
void product()
{
    int pro=1;
    temp=head;
    if(temp==NULL)
    {
        printf("empty linked list");
    }
    else
    {
        while(temp!=0)
        {
            pro=pro*temp->data;
            temp=temp->next;
        }
        printf("the product of the elements in the linked list are %d",pro);

    }
}

int main()
{
      int choice;
    do
    {
        printf("\n1.CREATE LIST");
        printf("\n2.DISPLAY LIST");
        printf("\n3.SUM");
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
                sum();
                break;
            case 4:
                product();
                break;
            case 5:
                exit(0);
                break;
        }
    }while(choice<=5);
}
