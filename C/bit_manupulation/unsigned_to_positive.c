#include<stdio.h>
#include<stdint.h>
int main(){

	int32_t x  = -6;
		
//	x = (~x) - 1;
	x &=~(1<<31);
	printf("%d ",x);

	return 0;
}

