#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>

struct node {
	int data ;
	struct node *next;
};

struct node *createNode(struct node *head,int val){

	struct node *newnode = (struct node*)malloc(sizeof(struct node));

	newnode->data = val;
	newnode->next = NULL;

	return newnode;
}

struct node *insert(struct node *head,int val){

	if(head == NULL)
		return createNode(head,val);
	struct node *temp = head;

	while(temp->next != NULL){
		temp = temp->next;
	}

	temp->next = createNode(head,val);

	return head;
}

struct node *reverse(struct node *head){


	struct node *prev = NULL;
	struct node *curr = head ;
	struct node *next;

	while(curr != NULL){
		
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;
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

	struct node *temp = NULL;

	while(head != NULL){

		temp = head->next;
		free(head);
		head = temp;
	}
	printf("The list is freed successfully");
}



int main(){

	struct node *head = NULL;

	head = insert(head,10);
	head = insert(head,20);
	head = insert(head,30);
	head = insert(head,40);


	Traverse(head);
	
	reverse(head);
	Traverse(head);

	freeList(head);

	return 0;
}

