#include<stdio.h>
void selectsort(int[],int);
void selectsort(int a[],int n)
{
    int i,j,min,sml,temp;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        sml=i+1;
        for(j=i+1;j<n-1;j++)
        {
            if(a[sml]>a[j+1])
            {
                sml=j+1;
            }
        }
        if(a[sml]<a[min])
        {
          temp=a[min];
          a[min]=a[sml];
          a[sml]=temp;
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
    selectsort(arr,size);
    return 0;
}