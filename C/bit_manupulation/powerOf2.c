#include<stdio.h>

int main(){

	int n;
	printf("enter a no:");
	scanf("%d",&n);

	if (n&(n-1))
		printf("%d not is the power of 2",n);
	else
		printf("%d is a power of 2",n);

	return 0;
}

