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
struct node *newnode,*tail,*temp;
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
    temp=tail->next;
    if(tail==NULL)
    {
        printf("empty list");
    }
    else
    {
        while(temp->next!=tail->next)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
    printf("%d",temp->data);
}
//insert at starting
void insertbegin()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the data");
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
    }
    printf("last->node-data %d",tail->next->data);
    return ;
}

//insertion end
void insertend()
{
     newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the data");
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
    printf("last->node-data %d",tail->next->data);
    return ;
}

//insert at specific position
void insertspecpos()
{
    int pos,i=1;
    printf("\n enter the position ");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(pos<0)
    {
        printf("invalid");
    }
    else if(tail==NULL)
    {
        tail=newnode;
        tail->next=newnode;
    }
    else if(pos==1)
    {
        insertbegin();
    }
    else
    {
        temp=tail->next;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return ;
}
int main()
{
    int option;
    do
    {
        printf("\n1.creation");
        printf("\n2.display");
        printf("\n3. insert at begin");
        printf("\n4. insert at end");
        printf("\n5. insert at specific position");
        printf("\n6.Exit");
        printf("\n. enter the option");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
              create1();
              break;
            case 2:
               display();
               break;
            case 3:
                printf("\n Before insertion ");
                display();
                insertbegin();
                printf("\n after insertion ");
                display();
                break;
            case 4:
                printf("\n Before insertion ");
                display();
                insertend();
                printf("\n after insertion ");
                display();
                break;
            case 5:
                printf("\n Before insertion ");
                display();
                insertspecpos();
                printf("\n after insertion ");
                display();
                break;
            case 6:
                exit(0);
                break;
        }
       
    }while(option<=6);
}