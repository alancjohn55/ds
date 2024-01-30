#include<stdio.h>
#include<stdlib.h>

int push(int A[], int top,int item,int size)
{
   
   int i;
    if(top==size-1)
    {
    printf("stack full");
    }
    else
    {
    top=top+1;
    A[top]=item;
    printf("%d",top);
    }
printf("inserted item is%d:",item);
return top;
}

  int pop(int A[],int top,int item)
  {
    if(top<0)
    {
    printf("stack empty");
    }
    else
    {
    item=A[top];
    top=top-1;
}
   printf("popped item is  %d \t ", item) ;
   return top;
}

void main()
{
    int ch,top=-1,item,A[100],size=100,i ;
   
    do
    {
   
    printf("\n1 push\n2 pop\n3 exit\nenter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
         printf("enter the item : ");
    scanf("%d",&item);
        top=push(A,top,item,size);
       
        printf("array are: ");
        for(i=0;i<top+1;i++)
        {
         printf("%d\t",A[i]);
         }        
        break;
        case 2:
       top=pop(A,top,item);
       printf("\t array are:");
        for(i=0;i<top+1;i++)
     {
         printf("%d\t",A[i]);
         }        
        break;
        case 3:
        exit(0);
        default:
        printf("error");
        }
    }
    while(ch!=3);
   
}


