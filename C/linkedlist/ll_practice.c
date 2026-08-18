#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

struct node{
int data;
struct node *next;
};

struct node *head = NULL;
struct node *createNode(int data){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;

	return newnode;
}


void insert(struct node *head,int val){

	struct node *temp = head;

	if (head == NULL)
		return ;
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = createNode(val);
}

void traverse(struct node *head){

	struct node *temp = head;

	while(temp != NULL){
		printf("%d ->",temp->data);
		temp = temp->next;
	}

}

int main(){

	struct node *head = NULL;

	insert(head,10);
	insert(head,20);
	insert(head,30);
	insert(head,40);
	insert(head,50);

	traverse(head);

	return 0;
}
