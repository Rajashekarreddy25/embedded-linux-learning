#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

struct node {
	int data;
	struct node *next;
};

struct node *createnode(struct node *head,int val){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));

	newnode->data = val;
	newnode->next = NULL;

	return newnode;
}

struct node *insertAtEnd(struct node *head,int val){
	struct node *temp = head;

	if(head == NULL)
		return createnode(head,val);

	while(temp->next != NULL){
		temp = temp->next;

	}
	temp->next = createnode(head,val);

	return head;
}

struct node *deleteAtPos(struct node *head,int pos){
	
	struct node *temp = head;
	struct node *del = NULL;
	int i = 1;

	while(i<pos-1){

		temp = temp->next;
		i++;
	}
	del = temp->next;
	temp->next = del->next;
	free(del);

	return head;
}

struct node *deleteAtBegin(struct node *head){

	struct node *del = head;
	
	head = del->next;
	free(del);

	return head;
}

struct node *deleteAtEnd(struct node *head){

	struct node *temp = head;
	struct node *del = NULL;

	if(head == NULL)
		return NULL;

	int n=0;
	
	while(temp != NULL){
		temp = temp->next;
		n++;
	}

	if (n == 1){
	       free(head);
       		return NULL;
	}		

	int i =1;

	while(i<n-1){
		temp = temp->next;
		i++;
	}

	del = temp->next;
	del->next = NULL;
	free(del);

	return head;
}

void Traverse(struct node *head){

	struct node *temp = head;

	while(temp != NULL){
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

void freeList(struct node *head){

	struct node *temp = head;

	while(head != NULL){

		temp = head->next;
		free(head);
		head = temp;
	}

	printf("The list is successfully Freed\n");
}



int main(){

	struct node *head = NULL;

       	head = insertAtEnd(head,10);
	 head = insertAtEnd(head,20);
	 head = insertAtEnd(head,30);
	 head = insertAtEnd(head,40);
	 head = insertAtEnd(head,50);

	 Traverse(head);
	
//	 head = deleteAtPos(head,1);
//	 Traverse(head);
	
//	 head = deleteAtBegin(head);
//	 Traverse(head);

	head = deleteAtEnd(head);
	Traverse(head);

	 freeList(head);

	 return 0;
}

	
