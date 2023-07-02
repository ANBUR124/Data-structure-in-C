#include<stdio.h>
void bubble(int[],int);
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        int flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        /*is used if array is sorted before the n-1 there is an iteration to complete n-1 
        no swapping is done so it is wasted of time to avoid time wee use flag*/
        {
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int i;
    int size;
    int arr[100];
    printf("enter the size");
    scanf("%d",&size);
    printf("\n Enter the values of array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble(arr,size);
    return 0;
}