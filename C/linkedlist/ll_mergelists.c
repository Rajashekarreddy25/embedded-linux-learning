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

//	struct node *temp3 = head3;

	while( temp1 != NULL && temp2 != NULL){

		if(temp1->data < temp2->data){

			head3 = insert(head3,temp1->data);
			temp1 = temp1->next;

		}
		else{
			head3 = insert(head3,temp2->data);
			temp2 = temp2->next;
		}
	}
		while(temp1 != NULL){
		      
		       	head3 = insert(head3,temp1->data);
			temp1 = temp1->next;	
		}

		while(temp2 != NULL){
			
			head3 = insert(head3,temp2->data);
			
			temp2 = temp2->next;
		}
	
	
	return head3;
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

	struct node *head1 = NULL;
	struct node *head2 = NULL;
	struct node *head3 = NULL;
	
	int n1,n2;
	printf("enter the sizes of the list1 and list2:");
        scanf("%d %d",&n1,&n2);
	int arr1[n1],arr2[n2];	
	printf("enter the values in the list1:\n");
	for (int i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("enter the values in list2:\n");
	for (int i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}

	for(int i=0;i<n1;i++){
		head1= insert(head1,arr1[i]);
	}
	for(int i=0;i<n2;i++){
		head2 = insert(head2,arr2[i]);
	}

	/*
	head = insert(head,50);

	head = insert(head,40);

	head = insert(head,30);

	head = insert(head,20);

	head = insert(head,10);
*/

	Traverse(head1);
	Traverse(head2);

	head3 = merge(head1,head2,head3);

	Traverse(head3);


	return 0;
}

