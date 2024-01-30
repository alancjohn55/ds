#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
}*head,*temp,*ptr;

void insertfront(int data)
{
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=data;
 if(head==NULL)
 {
  temp->next=NULL;
  head=temp;
 }
 else
 {
  temp->next=head;
  head=temp;
 }
}

void  insertspecific(int data,int key)
{
 int flag=0;
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=data;
 if(head==NULL)
 {
  temp->next=NULL;
  head=temp;
 }
 else
 {
  ptr=head;
  while(ptr!=NULL)
  {
   if(ptr->data==key)
   {
     flag=1;
     temp->next=ptr->next;
     ptr->next=temp;
     break;
   }
   else
   ptr=ptr->next;
  }
  if(flag==0)
    printf("Key is not present");
 }
}
void deletebeg()
{
  if(head==NULL)
    printf("linked list is empty");
  ptr=head;
  printf("deleted element:%d",ptr->data);
  head=ptr->next;
  free(ptr);
}
void deleteend()
{
  if(head==NULL)
    printf("linked list is empty");
  if(head->next==NULL){
    head=NULL;
    free(head);
  }
  else{
   ptr=head;
   while(ptr->next!=NULL)
   {
    temp=ptr;
    ptr=ptr->next;
   }
  temp->next=NULL;
  printf("deleted element:%d",ptr->data);
  free(ptr);
  }
}
void search(int item)
{
  int flag=0;
  if(head==NULL)
    printf("linked list is empty");
  temp=head;
  while(temp!=NULL)
  {
   if(temp->data==item){
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
 int data,ch,key;
 head=NULL;
 printf("Linked List Operation\n1. insertfront\n2.insertion after specific\n3.Deletion from begining\n4.Deletion from end\n5.Search\n6.Traversal\n7.Exit");
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
   printf("Enter the data to be inserted");
   scanf("%d",&data);
   printf("Enter the key");
   scanf("%d",&key);
   insertspecific(data,key);
  }
  if(ch==3)
    deletebeg();
  if(ch==4)
    deleteend();
  if(ch==5){
    printf("Enter the data to be searched");
    scanf("%d",&data);
    search(data) ;
   }
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
    printf("Exit");
    break;
   }
  }while(ch>0 &&ch<7);
}
