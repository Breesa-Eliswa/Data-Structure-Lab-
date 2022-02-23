#include<stdio.h>
void bs(int [] , int );
void read(int [], int );
void swap(int * , int *);
void print(int [] , int );
void main()
{
    int a[10], n ;
    printf("Enter the no: of elements :");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    read(a,n);
    bs(a,n);
    print(a,n);
}

void read(int a[], int n)
{
    int i ;
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);
}

void bs(int a[] , int n)
{
    int p, i ;
    for(p=1;p<n;p++)
      for(i=0;i<n-p;i++)
      {
          if (a[i]>a[i+1])
            swap(&a[i],&a[i+1]);
      }
}

void swap(int *p, int *q)
{
    int t ;
    t = *p;
    *p= *q;
    *q = t ;
}

void print(int a[], int n )
{
    int i ;
    printf("Sorted array is : \n ");
    for(i=0;i<n;i++)
        printf("%d \n ", a[i]);
}

