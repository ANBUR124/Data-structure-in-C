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
    /*void display()
{
    temp=head;
    if(head==NULL)
    {
        printf("the list is empty");
    }
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    return ;
}*/