#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=0;
void push(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data\n");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
	printf("node is inserted");
}
void pop(){
	struct node *temp;
	temp=top;
	if(top==0){
		printf("stack is empty");
	}
	else{
		printf("pop element is %d ",top->data);
		top=top->next;
		free(temp);
	}
}
void display(){
	struct node *temp;
	temp=top;
	if(temp==0){
		printf("stack is empty");
	}
	else{
		while(temp!=0){
			printf("%d -> ",temp->data);
			temp=temp->next;
		}
	}
	printf("null\n");
}
void main(){
	int c;
	do{
	printf("\n 1.push \n 2.pop \n 3.display \n 4.exit \n");
	printf("enter the choice:");
	scanf("%d",&c);
	switch(c){
		case 1:{
			push();
			break;
		}
		case 2:{
			pop();
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
