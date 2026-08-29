#include<stdio.h>

#include<stdint.h>


int main(){

	uint32_t reg;
	printf("enter a no:");
	scanf("%u",&reg);
	printf("entered no in binary is : %b\n",n);
	
	printf("enter the pos and len:");
	int n,pos;
	scanf("%d %d",pos,n);	
	// To extract the n bit from postion pos 
	uint32_t val = (n>>pos) & 0xf;

	printf("%b\n",val);

	return 0;
}



