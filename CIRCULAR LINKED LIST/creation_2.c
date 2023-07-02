#include<stdio.h>
#include<stdlib.h>
void create();
void create1();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*tail,*temp;

//BY using both "head and tail " -> pointer
/*void create()
{
    head=NULL;
    int ch=1;
    while(ch==1)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            tail=head=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        tail->next=head;
        printf("Do you want to add more data ");
        scanf("%d",&ch);
    }
    printf(" headnode-> data %d",head->data);
    printf("\n last nodetail-> next-> data %d",tail->next->data);
}*/

//by usin only tail pointer creating circular list
void create1()
{
    tail=NULL;
    int ch=1;
    while(ch==1)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(tail==NULL)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
           newnode->next=tail->next;
           tail->next=newnode;
           tail=newnode;
        }
        printf("Do you want to add more data ");
        scanf("%d",&ch);
    }
    printf("\n last nodetail-> next-> data %d",tail->next->data);

}
void display()
{
    temp=head;
    if(head==NULL)
    {
        printf("empty list");
    }
    else
    {
        while(temp->next!=head)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
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
               create1();
               break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
        }
       
    }while(option<=4);
}