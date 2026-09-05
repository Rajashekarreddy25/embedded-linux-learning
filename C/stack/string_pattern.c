#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

int pop(){

	if ( top == -1)
		printf("The stack is under flown");

	int val = stack[top--];
	 return val;
}


void push(){

	if ( top == 



}

int main(){

	char str1[] = "st**ri*ng";


	for(int i=0; str[i] != '\0'; i++){
		
		if (str[i] != '*' ){

			push(str[i]);

		}

		else if (str[i] == '*' ){

			printf("popped : %d "pop() );

		}



