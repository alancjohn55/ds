#include<stdio.h>
int insert(int q[],int size,int item,int front,int rear)
 {
 if(rear==size)
  printf("queue overflow");

 if(front==-1 && rear==-1)
  front=rear=0;
 else
   rear=rear+1;
 q[rear]=item;
 return rear;
}

int delete(int q[],int front,int rear)
{
 int item;
 if(front==-1 && rear==-1)
   printf("queue overflow");
 else
  {
   item=q[front];
   printf(" deleted");
  }
 
 if(front==rear)
   front=rear=0;
 else
   front=front+1;
   return front;
 
}

int main()
{
 int n,q[5],size=5,item,i,choice,front=0,rear=0;
 printf("create a queue and perfome the operations");
 printf("\n1.insertion\n2.deletion\n3.traversal\n4.exit\n");
 while(1)
 {
   printf("\nenter the choice");
   scanf("%d",&choice);
   if(choice==1)
   {
    printf("enter the item to be inserted");
    scanf("%d",&item);
    rear=insert(q,size,item,front,rear);
   }
    if(choice==2)
   {
    front=delete(q,front,rear);
   }
    if(choice==3)
   {
   
    printf("queue elements are:");
    for(i=rear;i>front;i--)
     printf("%d\t",q[i]);
   }
    if(choice==4)
   {
    printf("exit");
    break;
   }
  }
return 0;
}
