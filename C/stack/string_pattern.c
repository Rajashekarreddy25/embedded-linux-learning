#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

int pop(){

	if ( top == -1){
		printf("The stack is under flown");
		return -1;
	}
	int val = stack[top--];
	 return val;
}


void push(){

	if ( top == SIZE -1 )
		printf("The is overflown :");

	stack[++top];

}

int peek(){
	if ( top == -1){
		printf("the stack is empty");
		return -1;
	}
	int res = stack[top];

	return res;
}

int main(){

	char str[] = "st**ri*ng";


	for(int i=0; str[i] != '\0'; i++){
		
		if (str[i] != '*' ){

			push(str[i]);

		}

		else if (str[i] == '*' ){

			printf("popped : %d \n",pop() );

		}

	
	}
		printf("The resultant string is :");

		for(int i = 0;i <= top;i++){

			printf("%c",stack[i]);

		}

		return 0;
}

