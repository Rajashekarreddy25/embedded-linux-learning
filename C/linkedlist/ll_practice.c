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
	
	int i = 0;
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

	head = insertAtBegin(head,10);
	head = insertAtBegin(head,20);
	head = insertAtBegin(head,30);
	head = insertAtBegin(head,40);
	head = insertAtBegin(head,50);

	Traverse(head);
	head = insertAtPos(head , 60 ,3);
	Traverse(head);

	free_list(head);

	return 0;
}
