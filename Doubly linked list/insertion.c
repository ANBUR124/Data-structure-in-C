#include<stdlib.h>
#include<stdio.h>
void create();
void display();
void insertbegin();
void insertend();
void insertspecpos();
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
//insert at front
void insertbegin()
{
    //int val;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the val");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        newnode->prev=NULL;
        head->prev=newnode;
        head=newnode;
    }
}
//insert at end by using tail so timcomplexity is O(1)
void insertend()
{
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter the data");
   scanf("%d",&newnode->data);
   if(head==NULL)
   {
    head=newnode;
   }
   else
   {
    tail->next=newnode;
    newnode->prev=tail;
    newnode->next=NULL;
    tail=newnode;
   }
}
//insert at specific position
void insertspecpos()
{
    int i=1,pos;
    printf("\nenter the position to insert");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    if(pos<0)
    {
        printf("invalid pos");
    }
    else if(pos==1)
    {
        insertbegin();
    }
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
    }
}
int main()
{
    int op;
    do
    {
        printf("\n1.CREATE");
        printf("\n2.DISPLAY");
        printf("\n3.INSERT AT BEGIN");
        printf("\n4.INSERT AT END");
        printf("\n5.INSERT AT SPECIFIC POSITION");
        printf("\n6.INSERT AT AFTER SPECFIC POSITION");
        printf("\n7.EXIT");
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
                printf("\nBefore Insertion at front  ");
                display();
                insertbegin();
                printf("After insertion at front  ");
                display();
                break;
            case 4:
                printf("\nBefore Insertion at end  ");
                display();
                insertend();
                printf("After insertion at end   ");
                display();
                break;
           case 5:
                insertspecpos();
                break;
            /*case 6:
                //insertafterspecpos();
                break;*/
            case 7:
                exit(0);
                break;
        }
    }while(op<=7);
}