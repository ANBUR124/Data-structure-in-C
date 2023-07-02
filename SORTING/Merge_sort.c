#include<stdio.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
void printArray(int a[],int);


void merge(int a[],int l,int mid,int up)
{
   // printf("\n mergecall");
    int n1,n2;
    n1=mid-l+1;
    n2=up-mid;
    int L[n1],M[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        M[j]=a[mid+1+j];
    }
    int i,j,k;
    i=l,k=l,j=mid;
    while(i<n1 && j<n2)
    {
        if(L[i]<=M[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=M[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
       a[k]=L[i];
       i++;
       k++;
        
    }
    while(i<=n2)
    {
        a[k]=M[j];
        j++;
        k++;
        
    }    
    return ;

}
void mergesort(int a[],int l,int up)
{
    int mid;
    printf("\n merge");
    if(l<up)
    {
        mid=l+up/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,up);
        merge(a,l,mid,up);
    }
   // return ;   
}
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[100],n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the values of array");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\n Before sorting");
    printArray(a,n);
    printf("\n after sorting");
    mergesort(a,0,n);
    printArray(a,n);
    return 0;
}