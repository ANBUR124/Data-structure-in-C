#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
//by using only head node create circularlist
void create()
{
    head=NULL;
    int ch=1;
    while(ch==1)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
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
        temp->next=head;
        printf("DO you want to continue");
        scanf("%d",&ch);
    }
    printf(" headnode-> data %d",head->data);
    printf("\n last nodetemp-> next-> data %d",temp->next->data);
}
void display()
{
    if(head==NULL)
    {
        printf("empty list");
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);//printing of last node data
    }
}
int main()
{
    int option;
    do
    {
        printf("\n1.creation");
        printf("\n2.display");
        printf("\n enter the option");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
              create();
              break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
                break;
        }
       
    }while(option<=3);
}