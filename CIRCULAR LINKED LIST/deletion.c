#include<stdio.h>
#include<stdlib.h>
void create1();
void display();
void deletebegin();
void deleteend();
void deletespecpos();
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
//delete at starting
void deletebegin()
{
    temp=tail->next;
    if(tail==NULL)
    {
        printf("\n Empty list");
    }
    
    else if(temp->next==tail)
    {
        tail=NULL;
    }
    else
    {
        temp=tail->next;
        tail->next=temp->next;
    }
    free(temp);
   
}

//delete at end
void deleteend()
{
   // printf("begins");
    struct node *nextnode;
    temp=tail->next;
    if(tail==NULL)
    {
        printf("\n Empty list");
    }
    else if(temp->next==temp)
    {
        tail=NULL;
        free(temp);
    }
    else
    {
        temp=tail->next;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        tail=temp;
    }
    free(nextnode);
    return ;

}
//DELETE AT SPECIFIC POSITION
void deletespecpos()
{
    struct node *nextnode,*temp1;
    int i=1,pos;
    temp1=tail->next;
    printf("\n Enter the position to be deleted");
    scanf("%d",&pos);
    //l=getlength();
    if(tail==NULL)
    {
        printf("\n Empty list");
    }
    else if(pos==1)
    {
        deletebegin();
    }
    else if(pos<0)
    {
        printf("\n invalid position");
    }
    else
    {
        while(i<pos-1)
        {
            temp1=temp1->next;
            i++;
        }
        nextnode=temp1->next;
        temp1->next=newnode->next;
        free(nextnode);
    }
}

int main()
{
    int option;
    do
    {
        printf("\n1.creation");
        printf("\n2.display");
        printf("\n3. delete at begin");
        printf("\n4. delete at end");
        printf("\n5. delete at specific position");
        printf("\n6.Exit");
        printf("\n enter the option");
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
                printf("\n before deletion ");
                display();
                deletebegin();
                printf("\n After deletion  ");
                display();
                break;
            case 4:
                printf("\n before deletion  ");
                display();
                deleteend();
                printf("\n After deletion  ");
                display();
                break;
          case 5:
                printf("\n before deletion");
                display();
                deletespecpos();
                printf("\n After deletion");
                display();
                break;
            case 6:
                exit(0);
                break;
        }
       
    }while(option<=6);
}