#include<stdio.h>
void insert(int [] , int );
void read(int [] ,int );
int print(int [] , int );
void main()
{
    int a[10] ,  n ;
    printf("Enter the total no: of elements \n ");
    scanf("%d",&n);
    printf("Enter the elements: \n  ");
    read(a,n);
    insert(a,n);
    print(a,n);
}
void read(int a[] , int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void insert(int a[] , int n )
{
    int p, j, key ;
    for(p=1;p<n;p++)
    {
        key = a[p];
        for(j=(p-1);(j>=0 && a[j]>key);j--)
            a[j+1]=a[j];
        a[j+1]=key;
        
    }
}

int print(int a[] , int n )
{
    printf("The sorted array is : \n ");
    int i ;
    for(i=0;i<n;i++)
         printf(" \n  %d ",a[i]);
         
}
    
    
