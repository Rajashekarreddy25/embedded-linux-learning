#include<stdio.h>

int isPowerOf4(int n){

	return ( (n>0) && !(n&(n-1)) && (n&0x5555) );
}

int main(){
	int n;

	printf("enter a no ");
	scanf("%d",&n);

	if (isPowerOf4(n))
		printf("%d is the power of 4",n);
	else
		printf("%d is not a power of 4",n);

	return 0;
}
