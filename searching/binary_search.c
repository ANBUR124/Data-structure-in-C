#include<stdio.h>
#include<math.h>
//int binarysearch(int,int,int);
int binarysearch(int arr[],int size,int data)
{
   int l=0,r=size-1,mid;
   while(l<=r)
   {
    mid=floor(l+(r-l)/2);
    if(arr[mid]==data)
    {
        return mid;
    }
    else if(data<arr[mid])
    {
         r=mid-1;
    }
    else
    {
        l=mid+1;
    }
   }
   return -1;
}
int main()
{
    int arr[100],size,i;
    int res,data;
    printf("enter size of the array");
    scanf("%d",&size);
    printf("\n enter values in the array");
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("\n enter the data be searched");
    scanf("%d",&data);
    res=binarysearch(arr,size,data);
    if(res==-1)
    {
        printf("the element not found");
    }
    else
    {
        printf("\n the element %d present at position %d",data,res+1);

    }
    return 0;
}
