#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void peek();
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top=NULL;
void push()
{
    int x;
    struct stack *newnode;
    newnode=(struct stack *)malloc(sizeof(struct stack));
    printf("\n enter the data");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    struct  stack *temp;
    temp=top;
    if(top==NULL)
    {
        printf("stack is underflow");
    }
    else
    {
        printf("The popped element is %d",top->data);
        top=temp->next;
        free(temp);
    }
}
void display()
{
    struct stack *temp;
    temp=top;
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("the top most stack is %d",top->data);
    }

}
void main()
{
    int ch;
    do
    {
        printf("\n1.PUSH");
        printf("\n 2.POP");
        printf("\n 3.DISPLAY");
        printf("\n 4.PEEK");
        printf("\n Enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            default:
                printf("\n Invalid choice");
                break;
        }
    }while(ch<=4);
}