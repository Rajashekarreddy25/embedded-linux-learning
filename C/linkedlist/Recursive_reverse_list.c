#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    
};

struct node *createNode(struct node *head,int val){
    
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    
    newnode->next = NULL;
    newnode->data = val;
    
    return newnode;
}

struct node *insert(struct node *head,int val){
    
  struct node *temp = head;
  
  if (head == NULL)
        return createNode(head,val);
        
    
    while(temp->next != NULL){
        
        temp = temp->next;
    }
    
    temp->next = createNode(head,val);
    
    return head;
}


struct node *reverse (struct node *head){
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *next = NULL;
    
    
    while(curr != NULL){
        
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        
    }
    return prev;
}

struct node *recursive_Traverse_forward(struct node *head){
    
    struct node *temp = head;
    if (temp == NULL){
        printf("NULL\n");
        return NULL;
    }
        
    printf("%d->",temp->data);
    return recursive_Traverse_forward(temp->next);
}

void recursive_Traverse_backward(struct node *head){
    
    struct node *temp = head;
    if (temp == NULL){
        return ;
    }
    recursive_Traverse_backward(temp->next);
    printf("%d->",temp->data);
}
void Traverse(struct node *head){
    
    struct node *temp = head;
    
    while(temp != NULL ){
        printf("%d->",temp->data);
        temp = temp -> next;
    }
    
    printf("NULL\n");
}


int main()
{
    //printf("Hello World");
    
    struct node *head = NULL;
    int n;
    printf("enter the size of the list");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("enter the ele in the list");
    
    for(int i = 0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    
    for(int i=0;i<n;i++){
        head = insert(head,arr[i]);
    }
    /*
    struct node *head = NULL;
    
    head = insert(head,10);
    
    head = insert(head,20);
    head = insert(head,30);
    head = insert(head,40);
    head = insert(head,50);
    
    */
    
   // Traverse(head);
    //head = reverse(head);
   head = recursive_Traverse_forward(head);
   recursive_Traverse_backward(head);
    printf("NULL\n");
    //Traverse(head);
    
    return 0;
}
