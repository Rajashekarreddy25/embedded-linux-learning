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


struct node *insert(struct node *head,int val){

	struct node *temp = head;

	if (head == NULL)
		return createNode(val) ;
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = createNode(val);

	return createNode(val);
}

void traverse(struct node *head){

	struct node *temp = head;

	while(temp != NULL){
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");

}

int main(){

	struct node *head = NULL;

	head = insert(head,10);
	head = insert(head,20);
	head = insert(head,30);
	head = insert(head,40);
	head = insert(head,50);

	traverse(head);

	return 0;
}
