#include<stdio.h>
void insertsort(int[],int);
void insertsort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\n SORTED ARRAY  ");
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
    insertsort(arr,size);
    return 0;
}