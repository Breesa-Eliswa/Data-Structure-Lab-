#include<stdio.h>
int read(int[] , int );
int ls(int [], int , int );
int main()
{
    int a[10], n , key , y ;
    printf("Enter the total no: of elements ");
    scanf("%d",&n);
    printf("Enter the array elements \n ");
    read(a,n);
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    y=ls(a,n,key);
    if(y==0)
        printf("Element not found!!");
    else
        printf("Element found at %d position",y);
}
int read(int a[], int n )
{
    int i ;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

int ls(int a[], int n, int key)
{
    int i;
    for(i=0;i<n;i++)
        if (a[i]==key)
             return(i+1);
    return 0 ;
    
}

