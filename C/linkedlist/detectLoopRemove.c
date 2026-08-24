#include<stdio.h>
#include<stdlib.h>

struct node{
	int data ;
	struct node *next;
};

struct node *create (struct node *head,int val){

	struct node *newnode = (struct node*)malloc(sizeof(struct node));

	newnode->data = val;
	newnode->next = NULL;

	return newnode;
}
struct node *insertAtEnd(struct node *head,int val){

	struct node *temp = head;

	if (head == NULL)
		return create(head,val);

	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = create(head,val);

	return head;
}


void Traverse(struct node *head){

	struct node *temp = head;

	while( temp != NULL){

		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}



int freeList(struct node *head){

	struct node *temp = head;

	while(head != NULL){

		temp = head->next;
		free(head);
		head = temp;
	
	}

	printf("The list is freed\n");

}


int main(){

	struct node *head = NULL;


	head = insertAtEnd(head,10);

	head = insertAtEnd(head,20);

	head = insertAtEnd(head,30);

	head = insertAtEnd(head,40);

	head = insertAtEnd(head,50);


	Traverse (head);

	freeList(head);

	return 0;
}
