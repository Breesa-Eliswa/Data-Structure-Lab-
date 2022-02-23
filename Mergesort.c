#include<stdio.h>
void simplemerge(int [] , int  , int , int );
void mergesort(int [], int  , int );
void main()
{
    int a[50], n , i ;
    printf("Enter the total no: of elements: \n ");
    scanf("%d",&n);
    printf("Enter the elements in the array: \n ");
    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);
    }      
    mergesort(a,0,(n-1));
    printf("The sorted array is : \n ");
    for(i=0;i<n;i++)
          printf("\n %d",a[i]);
}
void mergesort(int a[] , int b , int e)
{
    int m;
    if(b<e)
    {
        m=(b+e)/2;
        mergesort(a,b,m);
        mergesort(a,(m+1),e);
        simplemerge(a, b , (m+1), e);
    }
}
void simplemerge(int x[] , int f , int s , int t )
{
    int temp[30], k=0, i=f, j=s ;
    while(i<s && j<=t)
    {
        if(x[i]<x[j])
             temp[k++]=x[i++];
        else
            temp[k++]=x[j++];
    }
    while(i<s)
         temp[k++]=x[i++];
    while(j<=t)
        temp[k++]=x[j++];
    for(i=f, j=0;j<k;  )
         x[i++]=temp[j++];
}


