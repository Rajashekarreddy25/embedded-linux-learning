#include<stdio.h>

#include<stdint.h>


int main(){

	uint32_t n;
	printf("enter a no:");
	scanf("%u",&n);
	printf("entered no in binary is : %b\n",n);
	
	// To extract the n bit from postion pos 
	uint32_t val = (n>>pos) & 0xf;

	printf("%b\n",val);

	return 0;
}



