#include<stdio.h>
#include<stdint.h>
/*
int main(){
	char str[] = "rajashekar";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{
			if( j == 1)
				continue;
			printf("i=%d j=%d\n",i,j);
			printf("%s\n",str);
		}
	}

	return 0;
}
*/
//int main(){
/*
	uint8_t status = 0X0E;
	if (status & 1 << 3) {
		printf("Set");
	} else 
	{
		printf("Clear");
	}

*/
/*
uint8_t mask = 0x0F;
	if ((uint8_t)~mask == 0xF0) {
  		 printf("Match");
	} else {
  		 printf("No match");
	}

	return 0;
}
*/

#include<inttypes.h>
#include<stdint.h>
#define TOGGLE_BIT(reg, n)  ((reg) ^= (1 << (n)), (reg) & (1 << (n)))
int main(){
uint8_t ctrl = 0x00;
uint8_t pos = 3;
TOGGLE_BIT(ctrl, pos++);

printf("The value is %" PRIu8 "\n",ctrl);

}
