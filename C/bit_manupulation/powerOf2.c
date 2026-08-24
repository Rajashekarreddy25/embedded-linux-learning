#include<stdio.h>

int main(){

	int n;
	printf("enter a no:");
	scanf("%d",&n);

	if (n&1)
		printf("%d is the power of 2",n);
	else
		printf("%d is no a power of 2",n);

	return 0;
}

