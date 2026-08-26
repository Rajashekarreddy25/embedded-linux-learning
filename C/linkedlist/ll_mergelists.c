#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};


struct node *create(struct node *head,int val){

	struct node *newnode = (struct node*)malloc(sizeof(struct node));

	newnode->data = val;
	newnode->next = NULL;

	return newnode;
}

struct node *insert(struct node *head,int val){

//	struct node *temp = head;
	
//	struct node *newnode = create(head,val);
	if(head == NULL)
		return create(head,val);

	 struct node *newnode = create(head,val);
	newnode->next = head;
       	head = newnode;

	return head;
}

void Traverse (struct node *head){

	struct node *temp = head;

	while(temp != NULL){

		printf("%d->",temp->data);

		temp = temp->data;
	}

	printf("NULL\n");
}


int main(){

	struct node *head = NULL;

	head = insert(head,50);

	head = insert(head,40);

	head = insert(head,30);

	head = insert(head,20);

	head = insert(head,10);


	Traverse(head);


	return 0;
}

