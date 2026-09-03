#include<stdio.h>

int main(){

	unsigned int x  = -32;
		
	x = (~x) - 1;

	printf("%d ",x);

	return 0;
}

