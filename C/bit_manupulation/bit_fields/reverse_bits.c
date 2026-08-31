#include<stdio.h>

#include<stdint.h>

int main(){

	uint32_t reg;

	printf("enter reg value:");

	scanf("%u",&reg);
	
	printf("The reg binary value is :%b\n",reg);

	uint32_t res = 0;
	for (int i=0;i<32;i++){
		
		res <<= 1;
		res |= reg & 1U;
		reg >>= 1;
	}

	printf("The reg after reverse is : %b\n",res);

	return 0;
}



