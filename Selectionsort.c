#include<stdio.h>
void ss(int [], int );
void read(int [], int );
void swap(int * , int *);

int main()
{  
    int a[10], n ,i ;
    printf("Enter the no: of elements  : \n ");
    scanf("%d",&n);
    printf("Enter the array elements:\n ");
    read(a,n);
    ss(a,n);
    printf("The sorted array is \n ");
    for(i=0;i<n;i++)
    {
        printf(" %d \t ",a[i]);
    }
}

void read(int a[], int n)
{   
    int i ;
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);
}

void ss(int a[] , int n)
{  
    int p, i,c ;
   for(p=0;p<(n-1);p++)
    {
       int small=a[p];
       int ind = p;
       for(c=(p+1);c<n;c++)
       {
           if(a[c]<small)
           {
               small=a[c];
               ind = c;
           }
          
       } 
       swap(&a[p],&a[ind]);   
    }
}
 
void swap(int *p, int *q)
{   
    int t ;
    t = *p;
    *p= *q;
    *q = t ;
}








