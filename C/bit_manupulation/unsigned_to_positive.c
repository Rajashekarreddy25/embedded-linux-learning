#include<stdio.h>
#include<stdint.h>
int main(){

	int32_t x  = 6;
	int32_t mask = 1<<31;	
//	x = (~x) + 1;
//	x &= ~(1U << 31);
	x = (x^mask) - mask;
	printf("%d ",x);

	return 0;
}

