#include<stdio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);
void swap(int *,int *);
void printarray(int[],int);
void quicksort(int a[],int lb,int ub)
{
    int i,loc;
    if(lb<ub)
    {
        loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
int partition(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(a[start]<=pivot)
    {
        start++;
    }
    while(a[end]>pivot)
    {
        end--;
    }
    if(start<end)
    {
        swap(&a[start],&a[end]);
    }
    swap(&a[lb],&a[end]);
    /*when start goes greater than end now pivot or lb should be swap with end index 
    to get fixed position for pivot*/
    return end;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void printarray(int a[],int n)
{
    int i;
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
    quicksort(arr,0,size-1);
    printarray(arr,size);
    return 0;
}