#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void createlist();
void createlist1();
void display();
void merging();
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
struct node *head1,*newnode1,*temp1;
void createlist()
{
    
    int ch=1;
    while(ch==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n enter the date for newnode");
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
    printf("the displaying list2");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void createlist1()
{
    
    int ch=1;
    while(ch==1)
    {
        newnode1=(struct node*)malloc(sizeof(struct node));
        printf("\n enter the date for newnode");
        scanf("%d->",&newnode1->data);
        newnode1->next=NULL;
        if(head1==NULL)
        {
            head1=temp1=newnode1;
        }
        else
        {
            temp1->next=newnode1;
            temp1=newnode1;
        }
        printf("Do You want to continue");
        scanf("%d",&ch);
    }
    printf("the displaying list2");
    temp1=head1;
    while(temp1!=NULL)
    {
        printf("%d->",temp1->data);
        temp1=temp1->next;
    }
}

void merging()
{
    temp=head;
    temp1=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=temp1;
    printf("\n the displaying mergind list\n ")
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    
}
int main()
{
    int choice;
    do
    {
        printf("\n1.CREATE LIST1");
        printf("\n1.CREATE LIST2");
        //printf("\n2.DISPLAY LIST");
        printf("\n2.MERGING");
        printf("\n3.exit");
        printf("\n enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               printf("creating first list");
               createlist();
               printf("creating second list");
               createlist1();
               break;
            case 2:
                merging();
                break;
            case 3:
                exit(0);
                break;
        }
    }while(choice<=3);
}