#include<stdio.h>

int main(){

	int n;
	printf("enter a number :");
	scanf("%d",&n);
	printf("the given numbwer is : %b");
	n = n &(n-1);

	printf("The no after clearing last set bit: %b",n);


return 0;
}	


