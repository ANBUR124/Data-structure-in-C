int insertion()
{
    int op,val;
    printf("enter the element to be inserted");
    scanf("%d",&val);
    printf("\n1.Insert at begin");
    printf("\n2.Insert at End");
    printf("\n3.Insert at Middle");
    printf("\nenter the place to be inserted");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            insertbegin(val);
            Displaylist();
            break;
        case 2:
            insertend(val);
            Displaylist();
            break;
        case 3:
            insertmiddle(val);
            Displaylist();
        default:
            exit (0);
    }
}
//searching
else
   {
 do
    {
        if(temp->data==element)
        {
            found=0;
        }
        else
        {
           temp=temp->next;
        }   
    }while(temp!=NULL);


    if(found==0)
    {
        printf("the element found");
        
    }
    
    else
    {
        printf("not found");
    }
    return false ;
   }
}
