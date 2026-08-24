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

struct node *detectLoopRemove(struct node *head){


	struct node *slow = head;
	struct node *fast = head;

	while(fast != NULL && fast->next != NULL){

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast){
			
			printf("loop detected\n");
			slow = head;
			while(slow != fast){

				slow = slow->next;
				fast = fast->next;

			}

			while(fast->next != slow){

				fast = fast->next;
			}


			fast -> next = NULL;
			break;
		}
	}

	return head;
}

int detectLoop(struct node *head){

	struct node *temp = head;
	struct node *visited[100];

	int count = 0;

	while(temp != NULL){
		
		for (int i=0; i<count;i++){
			if (visited[i] == temp )
				return 1;
		}

		visited[count] = temp;
		count++;

		temp = temp->next;
	}

	return 0;
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

	struct node *temp = head;

	struct node *loopnode = NULL;

	while(temp->next != NULL){

		if (temp->data == 30)
			loopnode = temp;

		temp = temp->next;
	}

	temp->next = loopnode;

//	detectLoopRemove(head);

	if (detectLoop)
		printf("loop detected\n");
	else
		printf("no loop detected\n");
	Traverse(head);

	freeList(head);

	return 0;
}
