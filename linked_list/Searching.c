#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void createlist();
void display();
void search();
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
void createlist()
{
    //head=NULL;
    int ch=1;
    while(ch)
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
}
void display()
{
    temp=head;
    if(head==NULL)
    {
        printf("the list is empty");
    }
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    return ;
}
void search()
{
    int item;
   // int i=0,flag;
    printf("enter the element to searched");
    scanf("%d",&item);
    temp=head;
    if(temp==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data==item)
            {
            printf("item found at location %d",i+1);
            flag=0;
            }
            else{
                flag=1;
            }
            i++;
            temp=temp->next;
        }
    }
}
   
  
int  main()
{
    int choice;
    do
    {
        printf("\n1.CREATE LIST");
        printf("\n2.DISPLAY LIST");
        printf("\n3.SEARCHING");
        printf("\n enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               createlist();
               break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                exit(0);
                break;
        }
    }while(choice<=4);
    return 0;
}

