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

struct node *insertAtBegin(struct node *head,int val){

	struct node *temp = head;

	if(head == NULL)
		return createNode(val);

	struct node *newnode = createNode(val);
	 
	newnode->next = head;
	head = newnode;
	
	return head;

}
struct node *insertAtEnd(struct node *head,int val){

	struct node *temp = head;

	if (head == NULL)
		return createNode(val) ;
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = createNode(val);

	return head;
}

struct node *insertAtPos(struct node *head,int val,int pos){

	struct node *temp = head;
	 
	if (head == NULL)
		return createNode(val);
	
	int i = 1;
	struct node *newnode = createNode(val);
	while(i< pos-1){
		temp =  temp->next; 
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	
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
void free_list(struct node *head){

	struct node *temp = NULL ;

	while(head != NULL){

		temp = head->next;
		free(head);
		head = temp;
	}

	printf("The list had been freed\n"); 

}

int main(){

	struct node *head = NULL;

	head = insertAtEnd(head,10);
	head = insertAtEnd(head,20);
	head = insertAtEnd(head,30);
	head = insertAtEnd(head,40);
	head = insertAtEnd(head,50);

	Traverse(head);
	head = insertAtPos(head , 60 ,6);
	Traverse(head);
	
	head = insertAtBegin(head , 70);
	Traverse(head);

	free_list(head);

	return 0;
}
