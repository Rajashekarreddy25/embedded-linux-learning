#include<stdio.h>
#include<stdlib.h>

struct node *head = NULL;

struct node {
	int data;
	struct node *next;
};

struct node *createnode(int val){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));

	newnode->data = val;
	newnode->next = NULL;

	return newnode;
}

struct node *insertAtEnd(struct node *head,int val){

	if (head == NULL)
		return createnode(val);
	
	struct node *temp = head;
	 
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = createnode(val);

	return head;
	
}

struct node *insertAtPos(struct node *head,int val,int pos){
	struct node *temp = head;
	struct node *newnode = createnode(val);
	if (pos == 0){
		newnode->next = head;
		return newnode;
	}
	 for(int i=0;i < pos-1 && temp != NULL;i++){
		
		 temp = temp->next;
	 }

	 if (temp == NULL){
		 printf("the pos entered is invalid");
		 free(newnode);
		 return head;
	 }

	 newnode->next = temp->next;
	 temp->next =newnode;
	
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

int main(){
	int n;
	printf("enter the size of list:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the ele in the list:\n");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		head = insertAtEnd(head,arr[i]);
	}
	printf("The elements in the list are :\n");
	Traverse(head);
	
	printf("enter the pos and value to insert the Node:\n");
	int pos,value;
	scanf("%d %d",&pos,&value);
	head = insertAtPos(head,value,pos);

	Traverse(head);
}

