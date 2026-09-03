#include<stdio.h>
#include<stdint.h>
int main(){

	int x  = -6;
		
//	x = (~x) - 1;
	x &= ~(1U << 31);
	printf("%d ",x);

	return 0;
}

