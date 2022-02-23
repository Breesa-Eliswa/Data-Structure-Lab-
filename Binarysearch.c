#include<stdio.h>
int bs(int [], int , int );
void read(int[], int );

void main()
{
    int a[10],n, key, x ;
    printf("Enter the total no: of elments:");
    scanf("%d",&n);
    printf("Enter the elments: ");
    read(a,n);
    printf("Enter the elment to be searched: ");
    scanf("%d",&key);
    x=bs(a,n,key);
    if(x==0)
        printf("Element not found!!!..");
    else
        printf("Element found at %d position ",x);
}
void read(int a[],int n )
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int bs(int a[], int n, int key)
{
    int t=0, b=(n-1) ;
    int m = (t+b)/2;
    if(a[m]==key)
        return(m+1);
    else
    {
        if(key<a[m])
             b=m-1;
        else
            t=m+1;
    }
    return 0;
    
}



