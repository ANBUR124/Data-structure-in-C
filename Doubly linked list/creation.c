#include<stdlib.h>
#include<stdio.h>
void create();
void display();
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*tail,*newnode,*temp;
/*void create()
{
    int ch=1;
    //head=NULL;
    while(ch)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data ");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
           
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
           // printf("%d",tail->data);
        }
        printf("\n do you want to continue");
        scanf("%d",&ch);
    }
    return ;

}*/
void create()
{
    int ch=1;
    //head=NULL;
    while(ch)
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
int main()
{
    int op;
    do
    {
        printf("\n1.CREATE");
        printf("\n2.DISPLAY");
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
                exit(0);
                break;
        }
    }while(op<=3);
}