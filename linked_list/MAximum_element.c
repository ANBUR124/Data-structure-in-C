#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create();
void display();
void maximum();
void minimum();
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
void create()
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
void maximum()
{
    int max;
    struct node *nextnode;
    //temp=head;
    nextnode=head;
    if(head==NULL)
    {
        printf("empty list");
    }
    else
    {
        max=head->data;
        while(nextnode!=NULL)
        { 
            if(max<nextnode->data)
            {
                max=nextnode->data;
            }
            nextnode=nextnode->next;
            
        }
        printf("The  maximum element is %d",max);
    }

}
void minimum()
{
   int min;
   temp=head;
   if(head==NULL)
   {
    printf("empty list");
   }
   else
   {
      min=head->data;
      while(temp!=NULL)
      {
        if(min>temp->data)
        {
            min=temp->data;
        }
        temp=temp->next;
      }
   
   }
   printf("the minimum elemnt is %d",min);
}


int main()
{
    int choice;
    do
    {
        printf("\n1.CREATE LIST");
        printf("\n2.DISPLAY LIST");
        printf("\n3.MAXIMUM");
        printf("\n 4.MINIMUM");
        printf("\n enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               create();
               break;
            case 2:
                display();
                break;
            case 3:
                maximum();
                break;
            case 4:
                minimum();
                break;
            case 5:
                exit(0);
                break;
        }
    }while(choice<=5);
}