#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=0,*rear=0;
void enqueue(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(front==0 && rear==0){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=rear->next;
	}
}
void display(){
    struct node *temp;
	if(front==0 && rear==0){
		printf("queue is empty");
	}
	else{
		temp=front;
		while(temp!=0){
			printf("%d -> ",temp->data);
			temp=temp->next;
		}
	}
	printf("null\n");	
}
void dequeue(){
	struct node *temp;
	temp=front;
	if(front==0 && rear==0){
		printf("queue is empty");
	}
	else{
	printf("deleted data is %d ",temp->data);
	front=front->next;
	free(temp);
}
}

void main(){
	int c;
	do{
	printf("\n 1.enqueue \n 2.dequeue \n 3.display \n 4.exit \n");
	printf("enter the choice:");
	scanf("%d",&c);
	switch(c){
		case 1:{
			enqueue();
			break;
		}
		case 2:{
			dequeue();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			break;
		}
		default:{
			printf("enter valid choice");
			break;
		}
			
	}
	}while(c!=4);
}
