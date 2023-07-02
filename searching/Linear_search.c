#include<stdio.h>
int main()
{
    int i,size,flag=0;
    int arr[100],data,pos;
    printf("\nenter the size");
    scanf("%d",&size);
    printf("\nenter the values in array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nthe elements are\t");
     for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nenter the data tobe searched");
    scanf("%d",&data);
    for(i=0;i<size;i++)
    {
        if(arr[i]==data)
        {
            pos=i;
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("the element  %d is present at position %d",data,pos);
    }
    else
    {
       printf("the element is not present");
    }
    return 0;
}