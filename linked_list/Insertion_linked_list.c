#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int create();
int Displaylist();
//int insertion();
void insertbegin(int);
void insertend(int);
void insertmiddle(int);
struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
int create()
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
    return 0;
}
//Displaying linked list
int Displaylist()
{
   temp=head;
   if(temp==NULL)
   {
      printf("the empty list");
   }
   while(temp!=NULL)
   {
    printf("%d->",temp->data);
    temp=temp->next;
   }
   return 0;
}
void insertbegin(int val)
{
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=val;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            newnode->next=head;
            head=newnode;
            return;
        }
}
void insertend(int val)
{
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=val;
        if(head==NULL)
        {
            head=newnode;
        }
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next= NULL;
        return;
}
void insertmiddle(int val)
{
        int key;
        printf("\nenter the element after which you wnat to insert the node ");
        scanf("%d",&key);
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=val;
        temp=head;
        do
        {
            if(temp->data==key)
            {
                newnode->next=temp->next;
                temp->next=newnode;
                return;
            }
            else
            {
                temp=temp->next;

            }
        }while(temp!=NULL);
}
int main()
{
    int choice,op,val;
    do{
        printf("\n1.creat a linkedlist");
        printf("\n2.Displaying linkedlist");
        printf("\n3.Insert Begin ");
        printf("\n4.Insert Middle ");
        printf("\n5.Insert End ");
        printf("\n6.Search");
        printf("\n7.End");
        printf("\n Enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                create();
                break;
            case 2:
                Displaylist();
                break;
            case 3:
                printf("\nenter the element to be inserted");
                scanf("%d",&val);
                insertbegin(val);
                printf("after insertion\n");
                Displaylist();
                break;
            case 4:
                printf("\nenter the element to be inserted");
                scanf("%d",&val);
                insertmiddle(val);
                printf("after insertion\n");
                Displaylist();
                break;
            case 5:
                printf("\nenter the element to be inserted");
                scanf("%d",&val);
                insertend(val);
                printf("after insertion\n");
                Displaylist();
                break;
            //case 6:

            case 7:
                exit(0);
                break;
        }

    }while(choice<=7);
    getch();
    return 0;
}
