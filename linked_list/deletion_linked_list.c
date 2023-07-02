#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int create();
int Displaylist();
//int insertion();
void deletebegin();
void deleteend();
void deletespecificpos(int);
struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*temp,*newnode;
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
//DELETE AT BEGINNING
void deletebegin()
{
    temp=head;
    head=head->next;
    free(temp);
    return ;

}
//DELETE AT ENDING
void deleteend()
{
  struct node *prev;
  temp=head;
  while(temp->next!=NULL)
  {
    prev=temp;
    temp=temp->next;
  }
  if(temp==head)
  {
    head=NULL;
    free(temp);
  }
  else
  {
    prev->next=NULL;
    free(temp);
  }
return ;
}
//DELETE AT SPECIFIC POSITION
void deletespecificpos(int pos)
{
    int i=1;
    struct node *nextnode;
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
    return ;
}
int main()
{
    int choice,pos;
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
                printf("\n Before deletion\n");
                Displaylist();
                deletebegin();
                printf("\n after Deletion\n");
                Displaylist();
                break;
            case 4:
                printf("\n enter the position to be inserted");
                scanf("%d",&pos);
                printf("\n Before deletion\n");
                Displaylist();
                deletespecificpos(pos);
                printf("\nafter deletion\n");
                Displaylist();
                break;
            case 5:
                printf("\n Before Deletion\n");
                Displaylist();
                deleteend();
                printf("\n after deletion\n");
                Displaylist();
                break;

            case 6:
                exit(0);
                break;
        }

    }while(choice<=6);
    getch();
    return 0;
}
