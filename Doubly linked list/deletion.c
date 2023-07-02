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
//DELETE AT BEGIN
void deletebegin()
{
   temp=head;
   if(temp==NULL)
   {
    printf("empty list");
   }
   else
   {
    head=temp->next;
    head->prev=NULL;
    free(temp);
   }
}
//DELETE AT END
void deleteend()
{
    if(tail==NULL)
    {
        printf("empty list");
    }
    else
    {
        temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        free(temp);
    }
}
//DELETE AT SPECIFIC POSITION
void deletespecpos()
{
    int pos,i=1;
    printf("enter the position to be deleted");
    scanf("%d",&pos);
    temp=head;
    if(head==NULL)
    {
        printf("empty list");
    }
    else if(pos<0)
    {
        printf("invalid");
    }
    else if(pos==1)
    {
        deletebegin();
    }
    else
    {
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
}
int main()
{
    int op;
    do
    {
        printf("\n1.CREATE");
        printf("\n2.DISPLAY");
        printf("\n3.DELETE AT BEGIN");
        printf("\n4.DELETE AT END");
        printf("\n5.DELETE AT SPECIFIC POSITION");
        printf("\n6.EXIT");
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
                deletebegin();
                printf("After insertion at front  ");
                display();
                break;
           case 4:
                printf("\nBefore Insertion at end  ");
                display();
                deleteend();
                printf("After insertion at end   ");
                display();
                break;
          case 5:
                deletespecpos();
                break;
            case 6:
                exit(0);
                break;
        }
    }while(op<=6);
}
