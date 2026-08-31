#include<stdio.h>

#include<stdint.h>

uint32_t reverse_left(uint32_t reg,int k){

	return (reg<<k) | (reg>>(32-k));
}

int main(){

	uint32_t reg;
	int k;
	printf("enter a reg value and k value");

	scanf("%uu %d",&reg,&k);

	printf("The binary of reg is:%b",reg);

	printf("\nThe revesed binary is %b",reverse_left(reg,k));

	return 0;
}
