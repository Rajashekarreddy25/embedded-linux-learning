#include<stdio.h>
#include<stdlib.h>

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

struct node *insertAtEnd(struct node *head,int val){

	struct node *temp = head;

	if (head == NULL)
		return createNode(head,val);

	while(temp->next != NULL){
		temp= temp->next;
	}

	temp->next = createNode(head,val);

	return  head;
}
void middleNode(struct node *head){

	struct node *slow = head;
	struct node *fast = head;

	while (fast->next->next != NULL){

		slow = slow->next;
		fast = fast->next->next;

	}

	printf("The middle node is : %d\n",slow->data);

}
void Traverse(struct node *head){

	struct node *temp = head;

	while(temp != NULL){
		printf("%d->",temp->data);
		temp = temp->next;
	}

	printf("NULL\n");
}

int main(){

	struct node *head = NULL;

	head = insertAtEnd(head,10);

	head = insertAtEnd(head,20);

	head = insertAtEnd(head,30);

	head = insertAtEnd(head,40);

//	head = insertAtEnd(head,50);

	Traverse(head);
	
	middleNode(head);

	return 0;
}
	


