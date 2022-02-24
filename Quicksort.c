#include<stdio.h>
void quicksort(int [],int ,int );
int part(int [], int , int );
void swap(int * ,int * );

void swap(int *p, int *q)
{   int t ;
    t = *p;
    *p = * q;
    *q= t ;}
    
void main()
{
    int n , i , a[10];
    printf("Enter total no: of elemnts \n");
    scanf("%d",&n);
    printf("Enter the elements to be sorted \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,(n-1));
    printf("Sorted array is \n");
    for(i=0;i<n;i++)
        printf("   %d",a[i]);
        
}
void quicksort(int a[], int lb, int ub)
{
    if(lb<ub)
    {
        int pos = part(a, lb, ub);
        quicksort(a,lb,(pos-1));
        quicksort(a,(pos+1),ub);
    }
}

int part(int a[],int lb, int ub)
{
    int key = a[lb];
    int i =(lb+1);
    int j = ub ;
    do
    {
        while(a[i]<key&&(i<j))
             i++;
        while(a[j]>key&&(j>lb)) 
             j--;
        if(i<j)
          swap(&a[i],&a[i+1]);
    }while(i<j);
    swap(&a[lb],&a[j]);
     return (j);
}



