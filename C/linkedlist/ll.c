#include<stdio.h>
#include<stdlib.h>

struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *head3 = NULL;

struct node{
        int data ;
        struct node *next;
};

struct node *createNode(int val){
        struct node *newnode = (struct node*)malloc(sizeof(struct node));

        newnode->data = val;
        newnode->next = NULL;

        return newnode;
}

struct node  *insert(struct node *head,int val){

        if (head == NULL)
                return createNode(val);

	struct node *temp = head;

	while(temp->next != NULL){
		temp= temp->next;
	}
	temp->next = createNode(val);
	
	return head;
}

void traverse(struct node *head)
{
	struct node *temp = head;
	
	while(temp != NULL){

		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}


struct node *merge(struct node *head1,struct node *head2){
	
	struct node *temp1 = head1;
	struct node *temp2 = head2;
	struct node *head3 = NULL;

	while(temp1 != NULL && temp2 != NULL){

		if (temp1 ->data < temp2->data){
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
int main(){

	int size1,size2;

	printf("enter the size of list1 and list2\n");
	scanf("%d%d",&size1,&size2);
	
	int arr1[size1],arr2[size2];
	printf("enter the elements in list1\n");
	for (int i=0; i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	for (int i=0;i<size1;i++){
	head1 = insert(head1,arr1[i]);
	}

	traverse(head1);

	printf("\nenter the ele in  list2 is:");
	for (int i =0 ; i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<size2;i++){
		head2 = insert(head2,arr2[i]);
	}
	traverse(head2);
	printf("\nthe list after the merging two lists is :\n");

	head3 = merge(head1,head2);
	traverse(head3);

	return 0;
}


