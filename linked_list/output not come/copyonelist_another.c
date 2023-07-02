#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void creatlist();
void display();
void copying();
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
struct node *head1,*temp1;
void creatlist()
{
    int ch=1;
    while(ch==1)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the date for newnode");
        scanf("%d->",&newnode->data);
        newnode->next=NULL;
        if(head== NULL)
        {
        head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue(0/1)");
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
//copying one list to another
void copying()
{
    temp=head;
    head1=(struct node *)malloc(sizeof(struct node));
    temp1=head1;
    while(temp->next!=NULL);
    {
        temp1->data=temp->data;
        temp1->next=(struct node *)malloc(sizeof(struct node));
        temp1=temp1->next;
        temp=temp->next;
    }
    temp1=NULL;
    while(head1->next!=NULL)
    {
        printf("%d->",head1->data);
        head1=head1->next;
    }  
}
int main()
{
    int option;
    do
    {
        printf("\n 1.create a list");
        printf("\n 2.display a list");
        printf("\n3.copying list");
        printf("\n4.exit");
        printf("\nenter option");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
               creatlist();
               break;
            case 2:
                display();
                break;
            case 3:
                copying();
                break;
            case 4:
              exit(0);
              break;
        }
    }while(option<=4);
    return 0;
}