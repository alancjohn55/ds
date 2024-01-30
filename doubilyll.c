#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next,*prev;
 
}*head,*temp,*temp1,*temp5,*ptr,*pre;

void insertfront(int data)
{
 
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=data;
 if(head==NULL)
 {
  temp->next=NULL;
  temp->prev=NULL;
  head=temp;
 }
 else
 {
  temp->next=head;
  head->prev=temp;
  temp->prev=NULL;
  head=temp;
 }
}
void insertlast()
{
  int data;
 printf("Enter the data to be inserted");
   scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(struct node));
    temp1=(struct node*)malloc(sizeof(struct node));
    pre=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   if(head==NULL)
 {
  temp->next=NULL;
  temp->prev=NULL;
  head=temp;
 }
 else
 {
  temp1=head;
  while(temp1!=NULL)
  {

pre=temp1;
temp1=temp1->next;
}
pre->next=temp;
temp->prev=pre;
temp->next=NULL;

 }
  } 
 
void deletefront()
{
if(head==NULL)
printf("empty");
else{
temp5=head;
head=head->next;
free(temp5);

}
}
void deletelast(){


   temp=(struct node*)malloc(sizeof(struct node));
    temp1=(struct node*)malloc(sizeof(struct node));
    pre=(struct node*)malloc(sizeof(struct node));
 
   if(head==NULL)
   printf("empty");

 else
 {
  temp1=head;
  while(temp1!=NULL)
  {

pre=temp1;
temp1=temp1->next;
}
temp5=pre->prev;
temp5->next=NULL;
free(pre);

 }
  } 

 void search(int key)
{
int flag=0;
  if(head==NULL)
    printf("linked list is empty");
  temp=head;
  while(temp!=NULL)
  {
   if(temp->data==key){
     printf("Element is present in linkedlist");
     flag=1;
     break;
    }
   temp=temp->next;
  }
  if(flag==0)
     printf("Element is not present in linked list");
}








 
  
void main()
{
 int data,ch,key,count=0;
 head=NULL;
 printf("Linked List Operation\n1. insertfront\n2.no of nodes\n3.instert at last\n4.Deletion front\n5.delete last\n6.Traversal\n 7.searching\n8.Exit");
 do
 {
  printf("\nEnter the choice:");
  scanf("%d",&ch);
  if(ch==1)
  {
   printf("Enter the data to be inserted");
   scanf("%d",&data);
   insertfront(data);
  }
  if(ch==2)
  {
      if(head==NULL)
          printf("0 nodes");
       else{
         printf("no of nodes =\n");
         temp=head;
while(temp!=NULL)
{
count++;
temp=temp->next;
}
printf("%d",count);
     }
  }
 
 
 if(ch==3)

 insertlast();
 
 if(ch==4)
  deletefront();
  
  if(ch==5)
  deletelast();
 
 if(ch==6)
  {
      if(head==NULL)
          printf("linked list is empty");
       else{
        printf("linked list:");
         temp=head;
while(temp!=NULL)
{

printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL");
     }
  }
  
  if(ch==7)
{
  int key;
  printf("enter the element to search");
  scanf("%d",&key);
  search(key);
  
  }
  
  if(ch==8)
   {
    printf("Exit");
    break;
   }
  }while(ch>0 &&ch<8);
}
