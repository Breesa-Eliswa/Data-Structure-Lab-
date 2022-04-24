#include<stdio.h>
#define max 50
void main()
{
    int top=-1, i , n , item ,choice, stack[max];
    while(choice!=5)
    {
        printf("\n 1 . Push \n 2. Pop \n 3. Display \n 4. Peek");
        printf("\n ENTER THE OPERATION \n ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            printf("Enter the element to be pushed: ");
            scanf("%d",&item);
            if(top==max)
             {
                 printf("stack is full");
             }
            else{
                top=top+1;
                stack[top]=item;
                printf("%d is pushed",item);
            } 
            break;
            }
            case 2:
            {
                if(top==-1)
                {
                    printf("Stack is empty!!..");
                }
                else
                {
                   item= stack[top];
                   top=top-1;
                   printf("%d is popped",item);
                }
                break;
            }
            case 3:
            {
                printf("Stack elements are: ");
                for(i=0;i<=top;i++)
                {
                    printf("%d \t ", stack[i]);
                }
                break;
            }
            case 4:
            {
                printf("the peek element is %d",stack[top]);
            }
            break;
        }
    }
}
