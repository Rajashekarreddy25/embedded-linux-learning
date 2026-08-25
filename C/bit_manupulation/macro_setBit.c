#include<stdio.h>

#define SET(n,pos) (n& (1<<pos))

int main(){

	int n;
	printf("enter a value");
	scanf("%d",&n);

	if (SET(n,3))
		printf("set");
	else
		printf("NOT set");

	return 0;
}
