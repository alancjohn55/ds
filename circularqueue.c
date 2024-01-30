#include<stdio.h>
 int q[5],size=5,front,rear,count;
 void insert(int item)
 {
 if(count==size)
  printf("queue overflow");
 else
 {
 q[rear]=item;
 rear=(rear+1)%size;
 count++;
 }
}

int delete()
{
 int item;
 if(count==0)
  printf("Underflow");
 else
 {
  item=q[front];
  front=(front+1)%size;
  count=count-1;
  return item;
 }
}

int main()
{
 int item,i,choice;
 front=0;
 rear=0;
 count=0;
 printf("create a queue and perfrome the operations");
 printf("\n1.insertion\n2.deletion\n3.traversal\n4.exit\n");
 while(1)
 {
   printf("\nenter the choice");
   scanf("%d",&choice);
   if(choice==1)
   {
    printf("enter the item to be inserted");
    scanf("%d",&item);
    insert(item);
   }
    if(choice==2)
   {
    item=delete();
    printf("Item Deleted:%d",item);
   }
    if(choice==3)
   {
    if(count==0)
     printf("Queue is empty");
   
    printf("queue elements are:");
    i=front;
    int j=0;
    while(j<count)
    {
     printf("%d\t",q[i]);
     i=(i+1)%size;
     j++;
     }
   }
    if(choice==4)
   {
    printf("exit");
    break;
   }
  }
return 0;
}
