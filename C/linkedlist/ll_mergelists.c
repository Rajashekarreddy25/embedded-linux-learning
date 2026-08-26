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

	if(head == NULL)
		return create(head,val);

	struct node *newnode = create(head,val);

	newnode->next = head;
       	head = newnode;

	return head;
}

struct node *merge(struct node *head1,struct node *head2,struct node *head3){

	struct node *temp1 = head1;

	struct node *temp2 = head2;

	struct node *temp3 = head3;

	while( temp1 != NULL && temp2 != NULL){

		if(temp1->data < temp2->data){

			temp3->data = temp1->data;
			temp1 = temp->next;

		}
		else{
			temp3->data = temp2->data;
			temp2 = temp2->next;
		}

		while(temp1 != NULL){
		      
		       	temp3->data = temp1->data;
			
			temp3 = temp3->next;
		}

		while(temp2 != NULL){
			
			temp3 ->data = temp2->data;
			
			temp3 = temp3->next;
		}
	}
}	





void Traverse (struct node *head){

	struct node *temp = head;

	while(temp != NULL){

		printf("%d->",temp->data);

		temp = temp->next;
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

