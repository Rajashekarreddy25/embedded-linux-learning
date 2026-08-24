#include<stdio.h>
#include<stdint.h>

int main(){

	uint32_t reg = 5;
	
	uint32_t  res =0;

	printf("%b \n",reg);

	for (int i=0;i<32;i++){
		uint32_t bit = reg&1;
		res = (res<<1)|bit;
		reg = reg>>1;
	}
	printf("the no after reverse is :%b ",res);

	return 0;
}

