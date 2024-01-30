#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int info;
    struct node* next;
};
 
struct node* last = NULL;
 

void insertAtFront(int data)
{
   
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
   
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
 
 
    else {
        temp->info = data;
        temp->next = last->next;
 

        last->next = temp;
    }
}

void addatlast(int data)
{

    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
   
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
 

    else {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void viewList()
{

    if (last == NULL)
        printf("\nList is empty\n");
 
 
    else {
        struct node* temp;
        temp = last->next;
 
   
        do {
            printf("\nData = %d", temp->info);
            temp = temp->next;
        } while (temp != last->next);
    }
}
 
// Driver Code
int main()
{
    int ch,n;
    do
    {
    printf("\n1.insertion at front\n2.Insertion at last\n3.Display\n4.Exit\nEnter your choice: ");
    scanf("%d",&ch);
    if(ch==1)
    {
     printf("Enter element to inserted: ");
     scanf("%d",&n);
     insertAtFront(n);
    }
    if(ch==2)
    {
     printf("Enter element to inserted: ");
     scanf("%d",&n);
     addatlast(n);
    }
    if(ch==3)
    {
      viewList();
    }
    ch++;
    }while(ch<=4);
   
   
 
    return 0;
}
